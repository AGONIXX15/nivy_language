#pragma once

#include <expected>
#include <string>
#include <string_view>

#include "InstructionList.h"

class lexer {
public:
  static std::expected<InstructionList, std::string_view>
  string_to_instuction_list(const std::string &omega_code) noexcept;

  static void
  instruction_list_to_tokens(const InstructionList &cutted_strings) noexcept;
};
