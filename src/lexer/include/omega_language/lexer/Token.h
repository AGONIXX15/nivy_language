#pragma once
#include <omega_language/lexer/Position.h>
#include <omega_language/lexer/TokenKind.h>
#include <string>

namespace omega_language {

struct Token {
  std::string_view value;
  TokenKind kind;
  Position start;
  Position end;
  Token(const std::string_view value, const TokenKind kind,
        const Position start, const Position end);
  friend std::ostream &operator<<(std::ostream &os, const Token &tok);
};

} // namespace omega_language
