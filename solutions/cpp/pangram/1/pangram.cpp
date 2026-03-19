#include <vector>
#include <algorithm>
#include <cctype>
#include "pangram.h"

namespace pangram {

// TODO: add your solution here
    bool is_pangram(std::string sentence)
    {
        std::vector<char> founds = {};
        for (auto &s: sentence)
            {
                if (!std::isalpha(s)) 
                {
                    continue;
                }
                auto it = std::find(founds.begin(), founds.end(), std::tolower(s));
                if(it == founds.end())
                {
                    founds.push_back(s);
                }
            }
        return founds.size() == 26;
    }

}  // namespace pangram
