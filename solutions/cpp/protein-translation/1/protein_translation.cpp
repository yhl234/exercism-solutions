#include "protein_translation.h"
#include <map>

namespace protein_translation {

// TODO: add your solution here
    std::map<std::string, std::string> protein_map = {
        {"AUG", "Methionine"},
        {"UUU", "Phenylalanine"},
        {"UUC", "Phenylalanine"},
        {"UUA", "Leucine"},
        {"UUG", "Leucine"},
        {"UCU", "Serine"},
        {"UCC", "Serine"},
        {"UCA", "Serine"},
        {"UCG", "Serine"},
        {"UAU", "Tyrosine"},
        {"UAC", "Tyrosine"},
        {"UGU", "Cysteine"},
        {"UGC", "Cysteine"},
        {"UGG", "Tryptophan"},
        {"UAA", "STOP"},
        {"UAG", "STOP"},
        {"UGA", "STOP"},
    };
    
    std::vector<std::string> proteins(std::string rna){
        std::vector<std::string> results;
        for (size_t i = 0; i < rna.size(); i += 3){
            std::string sub_string = rna.substr(i, 3);
            std::string protein = protein_map[sub_string];
            if(protein == "STOP") break;
            results.push_back(protein);
        }
        return results;
    };

}  // namespace protein_translation
