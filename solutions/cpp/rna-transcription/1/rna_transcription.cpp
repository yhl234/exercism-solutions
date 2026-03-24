#include <map>
#include "rna_transcription.h"

namespace rna_transcription {

// TODO: add your solution here
    const static std::map<char, char> transcription_map = {{'G', 'C'}, {'C', 'G'}, {'T', 'A'}, {'A', 'U'}};
    char to_rna(char dna){
        return transcription_map.at(dna);
    };
    std::string to_rna(std::string dna){
        std::string result;
        for (auto c:dna){
            result += to_rna(c);
        };
        return result;
    };

}  // namespace rna_transcription
