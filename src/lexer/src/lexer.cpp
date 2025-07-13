#include "omega/lexer/lexer.h"
#include <initializer_list>

#include <initializer_list>
#include <ranges>
#include <vector>

#include "special_symbols.h"

InstructionList lexer::cut(const std::string &omega_code) noexcept {
  InstructionList cutted_strings;

  for (const char &omega_char : omega_code) {
    for (const char &c : special_symbols::included_cutters) {
      if (c == omega_char) {
        cutted_strings.push_token();
        cutted_strings.add_char(c);
        cutted_strings.push_token();
      }
    }

    for (const char &c : special_symbols::excluded_cutters) {
      if (c == omega_char) {
        cutted_strings.push_token();
      }
    }

    for (const char &c : special_symbols::included_sepertors) {
      if (c == omega_char) {
        cutted_strings.push_token();
        cutted_strings.add_char(c);
        cutted_strings.push_token();
        cutted_strings.push_statement();
      }
    }
  }

  return cutted_strings;
}

void lexer::convert_to_enum(const InstructionList &cutted_strings) noexcept {}
