#include <format>
#include <iostream>
#include <nivy_language/lexer/Lexer.h>

namespace nivy_language {

Lexer::Lexer(const std::string &file_content, const size_t pos,
             const size_t line, const size_t column)
    : file_content(std::move(file_content)), pos(pos), line(line), column(column) {}

std::expected<char, std::string_view> Lexer::get_char() {
  if (pos < file_content.size()) {
    return file_content[pos];
  }
  return std::unexpected("EOF");
}

// advance the position and the column
void Lexer::advance() {
  ++pos;
  ++column;
}

void Lexer::newline() {
  column = 0;
  ++line;
}

// delete characters that are not important
void Lexer::trash() {
  while (pos < file_content.size()) {
    char character = get_char().value();
    if (character == ' ') {
      advance();
    } else if (character == '\n') {
      advance();
      newline();
    } else {
      break;
    }
  }
}

Token Lexer::identifier_token() {
  // initializing the start position
  const Position start(line, column, pos);

  while (pos < file_content.size()) {
    char character = get_char().value();
    if (std::isalnum(character) || character == '_') {
      advance();
    } else {
      break;
    }
  }
  const Position end(line, column, pos);
  std::string_view value(file_content.data() + start.pos, pos - start.pos);
  return Token(value, TokenKind::IDENTIFIER, start, end);
}

std::expected<std::vector<Token>, std::string> Lexer::tokenize() {
  std::vector<Token> tokens;
  while (pos < file_content.size()) {
    char character = get_char().value();

    if (isalpha(character) || character == '_') {
      tokens.push_back(identifier_token());
    } else if (character == '\n' || character == ' ') {
      trash();
    } else {
      return std::unexpected(
          std::format("error unknown character {}", character));
    }
  }

  return tokens;
}

} // namespace nivy_language
