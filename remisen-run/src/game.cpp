#include "game.hpp"

namespace rr
{
Game::Game(std::string n) : name_(n) {}
std::string Game::GetName() const { return name_; }

}  // namespace rr