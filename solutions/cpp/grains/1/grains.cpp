#include "grains.h"
#include <cmath>

namespace grains {

// TODO: add your solution here
    long long unsigned int square(int number){
        return pow(2, number - 1);
    }
    long long unsigned int total(){
        int result = 0;
        for (int i = 0; i < 64; i++){
            result += square(i);
        }
        return result;
    }

}  // namespace grains
