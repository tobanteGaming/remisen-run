#pragma once

#include <string>

namespace gio
{
class Game
{
public:
    Game(std::string n);
    std::string GetName() const;

private:
    std::string name_;
};
}  // namespace gio