#pragma once

#include <string>
#include <vector>

#include "InstructionList.h"

class lexer {
public:
  static InstructionList cut(const std::string &omega_code) noexcept;
  static void convert(const InstructionList &cutted_strings) noexcept;
};
