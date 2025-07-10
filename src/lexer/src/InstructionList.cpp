#include <omega/lexer/InstructionList.h>

void InstructionList::add_char(const char &c) noexcept { token_.push_back(c); }

void InstructionList::push_token() noexcept {
  statement_.push_back(token_);
  token_.clear();
}

void InstructionList::push_statement() noexcept {
  code_.push_back(statement_);
  statement_.clear();
}

std::vector<std::vector<std::string>> &InstructionList::get() noexcept {
  return code_;
}
