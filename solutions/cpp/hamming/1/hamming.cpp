#include <stdexcept>
#include "hamming.h"

namespace hamming {

// TODO: add your solution here
    int compute(std::string one, std::string two){
        int difference = 0;
        if (one.size() != two.size()){    
            throw std::domain_error("not allowed");
        } 
        for (std::size_t i = 0; i < one.size(); i++){
            if(one[i] != two[i]) difference++;
        }
        return difference;
    }

}  // namespace hamming
