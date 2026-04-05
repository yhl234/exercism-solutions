#include "allergies.h"

namespace allergies {

// TODO: add your solution here
    allergy_test::allergy_test(int score): _score(score) {
        if(EGG & _score) _allergies.emplace("eggs");
        if(PEANUTS & _score) _allergies.emplace("peanuts");
        if(SHELLFISH & _score) _allergies.emplace("shellfish");
        if(STRAWBERRIES & _score) _allergies.emplace("strawberries");
        if(TOMATOES & _score) _allergies.emplace("tomatoes");
        if(CHOCOLATE & _score) _allergies.emplace("chocolate");
        if(POLLEN & _score) _allergies.emplace("pollen");
        if(CATS & _score) _allergies.emplace("cats");
    };
    bool allergy_test::is_allergic_to(std::string food){
        return _allergies.find(food) != _allergies.end();
    }
    std::unordered_set<std::string> allergy_test::get_allergies(){
        return _allergies;
    }


}  // namespace allergies
