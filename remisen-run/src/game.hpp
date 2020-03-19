#pragma once

#include <string>

namespace rr
{
class Game
{
public:
    Game(std::string n);
    std::string GetName() const;

private:
    std::string name_;
};
}  // namespace rr