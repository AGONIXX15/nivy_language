#pragma once

#include <string>
#include <vector>

#include <omega/lexer/InstructionList.h>

class Lexer {
public:
  static InstructionList cut(const std::string &omega_code) noexcept;
  static void convert(const InstructionList &cutted_strings) noexcept;
};
