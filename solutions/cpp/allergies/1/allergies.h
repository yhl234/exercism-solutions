#include <string>
#include <unordered_set>

#pragma once

namespace allergies {


// TODO: add your solution here
    enum food {
        EGG = 1 << 0,
        PEANUTS = 1 << 1,
        SHELLFISH = 1 << 2,
        STRAWBERRIES = 1 << 3,
        TOMATOES = 1 << 4,
        CHOCOLATE = 1 << 5,
        POLLEN = 1 << 6,
        CATS = 1 << 7,
    };
    
    class allergy_test {
    int _score;
    std::unordered_set<std::string> _allergies;
    public:
        allergy_test(int score);
        bool is_allergic_to(std::string food);
        std::unordered_set<std::string> get_allergies();
    };

}  // namespace allergies
