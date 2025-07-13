#pragma once

#include <initializer_list>

class special_symbols {
public:
  constexpr static inline std::initializer_list<char> included_cutters = {
      ':', '=', ')', '(', '-', '*', '+', '/', '%', '$', ',', '{', '}',
  };

  constexpr static inline std::initializer_list<char> excluded_cutters = {
      ' ',
  };

  constexpr static inline std::initializer_list<char> included_sepertors = {
      ';',
      '\n',
  };
};
