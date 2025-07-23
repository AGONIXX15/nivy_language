#include <format>
#include <iostream>
#include <nivy_language/lexer/Token.h>

namespace nivy_language {

Token::Token(std::string_view value, TokenKind kind, Position start,
             Position end)
    : value(value), kind(kind), start(start), end(end) {}

std::ostream &operator<<(std::ostream &os, const Token &tok) {
  os << std::format("Token(value={},kind={},start={},end={})", tok.value,
                    to_string(tok.kind), tok.start, tok.end);
  return os;
}
} // namespace nivy_language
