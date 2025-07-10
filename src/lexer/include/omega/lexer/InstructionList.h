#pragma once

#include <string>
#include <vector>

class InstructionList {
public:
  void add_char(const char &c) noexcept;
  void push_token() noexcept;
  void push_statement() noexcept;

  void *operator new(std::size_t) = delete;
  void *operator new[](std::size_t) = delete;
  void operator delete(void *) = delete;
  void operator delete[](void *) = delete;

  std::vector<std::vector<std::string>> &get() noexcept;

private:
  std::vector<std::vector<std::string>> code_;
  std::vector<std::string> statement_;
  std::string token_;
};
