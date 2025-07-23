#pragma once
#include <string>

namespace omega_language {

enum class TokenKind {
  IDENTIFIER,
  STRING,
  INTEGER,
  FLOAT,

  // operators
  SLASH,
  STAR,
  PLUS,
  DASH,
};


inline std::string to_string(TokenKind kind) {
  switch (kind) {
    case TokenKind::IDENTIFIER: return "IDENTIFIER";
    case TokenKind::STRING:     return "STRING";
    case TokenKind::INTEGER:    return "INTEGER";
    case TokenKind::FLOAT:      return "FLOAT";

    case TokenKind::SLASH:      return "SLASH";
    case TokenKind::STAR:       return "STAR";
    case TokenKind::PLUS:       return "PLUS";
    case TokenKind::DASH:       return "DASH";

    default: return "UNKNOWN";
  }
}
} // namespace omega_language

