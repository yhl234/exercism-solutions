#include "raindrops.h"

namespace raindrops {

// TODO: add your solution here
    int checkers[3] = {3, 5, 7};
    std::string sounds[3] = {"Pling", "Plang", "Plong"};
    
    bool isDivisiable(int i, int c) {
        return i % c == 0;
    }
    
    std::string convert(int n) {
        std::string result;
        for (int i = 0; i < 3; i++) {
            if(isDivisiable(n, checkers[i])) {
                result += sounds[i];
            }
        }
        if(result.length() == 0) {
            return std::to_string(n);
        }
        return result;
    };

}  // namespace raindrops
