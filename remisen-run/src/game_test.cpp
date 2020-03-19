#include "catch2/catch.hpp"

#include "game.hpp"

TEST_CASE("remisen-run: GameGetName", "[remisen-run]")
{
    auto const game = rr::Game {"Remisen Run"};
    REQUIRE(game.GetName() == "Remisen Run");
}