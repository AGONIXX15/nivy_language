#pragma once

#include <functional>
#include <initializer_list>
#include <string>

#include "InstructionList.h"

class lexer {
public:
  static InstructionList cut(const std::string &omega_code) noexcept;
  static void convert_to_enum(const InstructionList &cutted_strings) noexcept;
};
