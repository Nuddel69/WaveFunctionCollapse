#include <catch2/catch_test_macros.hpp>

#include "Tile.h"
#include "Vec2.h"

TEST_CASE("Vec2 comparisons and operations") {
  Vec2 a{1, 2}, b{1, 2}, c{0, 3};
  REQUIRE(a == b);
  REQUIRE(!(a == c));
  REQUIRE(c < a);
  REQUIRE((a + c) == Vec2{1, 5});
}

TEST_CASE("Tile comparisons") {
  Tile a{"A"}, b{"A"}, c{"B"};
  REQUIRE(a == b);
  REQUIRE(!(a == c));
  REQUIRE(((c < a) || (a < c)));
}
