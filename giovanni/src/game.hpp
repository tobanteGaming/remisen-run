#pragma once

#include <string>

namespace gio {
class Game {
public:
  Game(std::string n) : name_(n) {}
  std::string GetName() const { return name_; }

private:
  std::string name_;
};
} // namespace gio