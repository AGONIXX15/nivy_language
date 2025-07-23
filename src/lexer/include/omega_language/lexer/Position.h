#pragma once

#include <cstddef>
#include <format>

namespace omega_language {

struct Position {
  size_t line = 0;
  size_t column = 0;
  size_t pos = 0;
};
} // namespace omega_language
//
template <> struct std::formatter<omega_language::Position> {
  constexpr auto parse(std::format_parse_context &ctx) { return ctx.begin(); }
  auto format(const omega_language::Position &pos, std::format_context &ctx) const {

    return format_to(ctx.out(), "Position(line={},column={},pos={})", pos.line,
                     pos.column, pos.pos);
  }
};
