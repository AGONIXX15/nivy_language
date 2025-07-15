#pragma once

#include <initializer_list>

class special_symbols {
public:
  const static inline std::initializer_list<char> included_cutters = {
      ':', '=', ')', '(', '-', '*', '+', '/', '%', '$', ',', '{', '}',
  };

  constexpr static inline std::initializer_list<char> excluded_cutters = {
      ' ',
  };

  constexpr static inline std::initializer_list<char> included_separators = {
      ';',
      '\n',
  };

  constexpr static inline std::initializer_list<char> forbidden_symbols = {
      '\t',
  };
};
