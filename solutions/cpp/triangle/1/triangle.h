#pragma once

namespace triangle {
// TODO: add your solution here
    enum flavor{
        equilateral,
        isosceles,
        scalene
    };
    flavor kind(double side_one, double side_two, double side_three);
}  // namespace triangle
