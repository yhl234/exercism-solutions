#include <stdexcept>
#include "collatz_conjecture.h"

namespace collatz_conjecture {

// TODO: add your solution here
    int steps(int input){
        if (input <= 0){
            throw std::domain_error("input must to be positive and greater then 0");
        }
        int result = 0;
        int current = input;
        while (current > 1) {
            if(current % 2 == 0){
                current /= 2;
            } else {
                current = current * 3 + 1;
            }
            result ++;
        }
        return result;
    }

}  // namespace collatz_conjecture
