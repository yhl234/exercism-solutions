#include <cmath>
#include "darts.h"

namespace darts {

// TODO: add your solution here
    int score(float x, float y){
        float distance = std::sqrt(std::pow(x, 2) + std::pow(y, 2));
        if(distance <= 1) return 10;
        if(distance <= 5) return 5;
        if(distance <= 10) return 1;
        return 0;        
    }
}  // namespace darts
