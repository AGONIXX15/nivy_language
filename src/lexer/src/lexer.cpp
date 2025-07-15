#include "special_symbols.h"
#include <format>
#include <omega/lexer/lexer.h>
#include <string_view>

std::expected<InstructionList, std::string_view>
lexer::string_to_instuction_list(const std::string &omega_code) noexcept {
  InstructionList cutted_strings;

  for (const char &omega_char : omega_code) {
    for (const char &c : special_symbols::included_cutters) {
      if (c == omega_char) {
        cutted_strings.push_token();
        cutted_strings.add_char(c);
        cutted_strings.push_token();
        break;
      }
    }

    for (const char &c : special_symbols::excluded_cutters) {
      if (c == omega_char) {
        cutted_strings.push_token();
        break;
      }
    }

    for (const char &c : special_symbols::included_separators) {
      if (c == omega_char) {
        cutted_strings.push_token();
        cutted_strings.add_char(c);
        cutted_strings.push_token();
        cutted_strings.push_statement();
        break;
      }
    }

    for (const char &c : special_symbols::forbidden_symbols) {
      if (c == omega_char) {
        const std::string error_message =
            std::format("unexpected char '{}'", omega_char);

        return std::unexpected(error_message);
      }
    }
  }

  return cutted_strings;
};

void lexer::instruction_list_to_tokens(
    const InstructionList &cutted_strings) noexcept {};
