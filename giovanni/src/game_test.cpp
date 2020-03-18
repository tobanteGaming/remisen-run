#include "catch2/catch.hpp"

#include "game.hpp"

TEST_CASE("giovanni: GameGetName", "[giovanni]") {
  auto const game = gio::Game{"Giovanni"};
  REQUIRE(game.GetName() == "Giovanni");
}