#include "reverse_string.h"

namespace reverse_string {

// TODO: add your solution here
    std::string reverse_string(std::string text){
        std::string result;
        for (int i = text.length() -1; i >= 0; i--)
            {
                result.push_back(text[i]);
            }
        return result;
    }

}  // namespace reverse_string
