#pragma once
#include <utility>

namespace queen_attack {

// TODO: add your solution here
    class chess_board {
    private:
    std::pair<int,int> _white;
    std::pair<int,int> _black;
    public:
    chess_board(std::pair<int,int> white, std::pair<int,int> black);
    std::pair<int,int> white() const;
    std::pair<int,int> black() const;
    bool can_attack() const;
    };

}  // namespace queen_attack
