#include <string>

namespace log_line {
std::string message(std::string line) {
    // return the message
    int found = line.find(": ");
    return line.substr(found + 2);
}

std::string log_level(std::string line) {
    // return the log level
    int found = line.find("]");
    return line.substr(1, found - 1);    
}

std::string reformat(std::string line) {
    // return the reformatted message
     return message(line) + " (" + log_level(line) + ")";
}
}  // namespace log_line
