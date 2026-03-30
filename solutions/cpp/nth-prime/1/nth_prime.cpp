#include <vector>
#include <cmath>
#include <stdexcept>
#include "nth_prime.h"


namespace nth_prime {

// TODO: add your solution here
    int nth(int number){
        if(number <= 0){
            throw std::domain_error("Number must greater than 0");
        }
        int current = 2;
        std::vector<int> primes = {};
        while ((int)primes.size() < number){
            int last_checker = (int)std::sqrt(current);
            bool is_prime = true;
            for (int c = 2; c <= last_checker; c++){
                int rest = current % c;
                if(rest == 0){
                    is_prime = false;
                };
            }
            if (is_prime == true){
                primes.push_back(current);
            }
            current ++;
        }
        return primes.back();
    }

}  // namespace nth_prime
