#include <cmath>
#include "difference_of_squares.h"

namespace difference_of_squares {

// TODO: add your solution here
    int square_of_sum(int number){
        int sum = 0;
        for (auto i = 1; i <= number; i++){
            sum += i;
        }
        return pow(sum, 2);
    }
    int sum_of_squares(int number){
        int sum = 0;
         for (auto i = 1; i <= number; i++){
            sum += pow(i, 2);;
        }
        return sum;
    }
    int difference(int number){
        return square_of_sum(number) - sum_of_squares(number);
    }

}  // namespace difference_of_squares
