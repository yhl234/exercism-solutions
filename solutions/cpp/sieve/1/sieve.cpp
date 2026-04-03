#include <algorithm>
#include "sieve.h"

namespace sieve {

// TODO: add your solution here
    const std::vector<int> primes(int input) {
        std::vector<int> unmarkeds;
        std::vector<int> markeds;

        for (int i = 2; i <= input; i++){
            bool is_marked = std::find(markeds.begin(), markeds.end(), i) != markeds.end();
            if (is_marked) continue;
            
            bool is_unmarked = std::find(unmarkeds.begin(), unmarkeds.end(), i) == unmarkeds.end();
            if(is_unmarked){
                unmarkeds.push_back(i);
            }
            
            for (int j = i; j <= input; j++){
                if(j % i == 0) {
                    markeds.push_back(j);
                }
            }
        }
        return unmarkeds;
    }


}  // namespace sieve
