#include <stdexcept>
#include "nucleotide_count.h"

namespace nucleotide_count {

// TODO: add your solution here
    std::map<char, int> count(std::string input){
        std::map<char, int> result = {{'A', 0}, {'C', 0}, {'G', 0}, {'T', 0}};
        for (auto c:input){
            auto found = result.find(c);
            if( found != result.end()){
                result[c] += 1;
            } else {
                throw std::invalid_argument("Invalid");
            }
        }
        return result;
    };

}  // namespace nucleotide_count
