#pragma once
#include <nivy_language/lexer/Position.h>
#include <nivy_language/lexer/TokenKind.h>
#include <string>

namespace nivy_language {

struct Token {
  std::string_view value;
  TokenKind kind;
  Position start;
  Position end;
  Token(const std::string_view value, const TokenKind kind,
        const Position start, const Position end);
  friend std::ostream &operator<<(std::ostream &os, const Token &tok);
};

} // namespace nivy_language
