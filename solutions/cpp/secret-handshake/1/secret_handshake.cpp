#include <algorithm>
#include "secret_handshake.h"

namespace secret_handshake {

// TODO: add your solution here
    std::vector<std::string> commands(int input){
        std::vector<std::string> result;
        if(input & WINK){
            result.push_back("wink");
        }
        if(input & DOUBLE_BLINK){
            result.push_back("double blink");
        }
        if(input & CLOUS_YOUR_EYES){
            result.push_back("close your eyes");
        }
        if(input & JUMP){
            result.push_back("jump");
        }
        if(input & REVERSE){
            std::reverse(result.begin(), result.end());
        }
        return result;
    }

}  // namespace secret_handshake
