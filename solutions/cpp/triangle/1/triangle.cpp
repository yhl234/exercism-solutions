#include <stdexcept>
#include <vector>
#include <algorithm>
#include "triangle.h"

namespace triangle {

// TODO: add your solution here
    flavor kind(double side_one, double side_two, double side_three){
        std::vector<double> sides = {side_one, side_two, side_three};
        std::sort(sides.begin(), sides.end());
        if(sides[0] + sides[1] < sides[2]) throw std::domain_error("inequality violation");
        int counts = 1;
        double previous = 0.0; 
        for (auto s : sides){
            if(s <= 0) throw std::domain_error("side must greater than 0");
            if(previous == s){
                counts++;
            }
            previous = s;
        }
        if(counts == 2) return isosceles;
        if(counts == 3) return equilateral;
        return scalene;
    };
}  // namespace triangle
