#pragma once

#include <cstddef>
#include <format>

namespace nivy_language {

struct Position {
  size_t line = 0;
  size_t column = 0;
  size_t pos = 0;
};
} // namespace nivy_language
//
template <> struct std::formatter<nivy_language::Position> {
  constexpr auto parse(std::format_parse_context &ctx) { return ctx.begin(); }
  auto format(const nivy_language::Position &pos, std::format_context &ctx) const {

    return format_to(ctx.out(), "Position(line={},column={},pos={})", pos.line,
                     pos.column, pos.pos);
  }
};
