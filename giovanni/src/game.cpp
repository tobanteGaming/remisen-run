#include "game.hpp"

namespace gio
{
Game::Game(std::string n) : name_(n) {}
std::string Game::GetName() const { return name_; }

}  // namespace gio