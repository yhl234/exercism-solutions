#pragma once
#include <string>
#include <vector>

namespace secret_handshake {

// TODO: add your solution here
    enum handshake {
        WINK = 1 << 0,
        DOUBLE_BLINK = 1 << 1,
        CLOUS_YOUR_EYES = 1 << 2,
        JUMP = 1 << 3,
        REVERSE = 1 << 4,
    };
    std::vector<std::string> commands(int input);

}  // namespace secret_handshake
