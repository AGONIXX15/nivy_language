#pragma once
#include <cstddef>
#include <expected>
#include <nivy_language/lexer/Token.h>
#include <string>
#include <vector>

namespace nivy_language {

class Lexer {
public:
  size_t line = 1;
  size_t column = 1;
  size_t pos = 0;
  std::string file_content;
  Lexer(const std::string &file_content, size_t pos = 0, size_t line = 1, size_t column = 1);

  std::expected<char,std::string_view> get_char();

  void advance();

  void newline();

  // delete '\n' and ' '
  void trash();

  Token identifier_token();


  std::expected<std::vector<Token>, std::string> tokenize();
};
} // namespace nivy_language
