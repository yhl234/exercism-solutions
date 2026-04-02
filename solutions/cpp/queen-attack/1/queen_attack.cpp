#include <stdexcept>
#include <cmath>
#include "queen_attack.h"

namespace queen_attack {


// TODO: add your solution here
    bool is_off_board(std::pair<int,int> position) {
        if(position.first < 0 || position.first > 7 || position.second < 0 || position.second > 7){
            return true;
        };
        return false;
    }
    
    chess_board::chess_board(std::pair<int,int> white, std::pair<int,int> black): _white(white), _black(black) {
        if (white == black) {
            throw std::domain_error("invalid location");
        }
        if( is_off_board(white) || is_off_board(black)) {
            throw std::domain_error("invalid location");
        }
    }
    
    std::pair<int,int> chess_board::white() const {
        return  _white;
    }
    
    std::pair<int,int> chess_board::black() const {
        return _black;
    }
    
    bool chess_board::can_attack() const {
        if(white().first == black().first || white().second == black().second) return true;
        if(std::abs(white().first - black().first) == std::abs(white().second - black().second)) return true;
        return false;
    }

}  // namespace queen_attack
