#include "sum_of_multiples.h"
#include <numeric>
#include <unordered_set>
namespace sum_of_multiples {

// TODO: add your solution here
    int to(std::vector<int> items, int level){
        std::unordered_set<int> uniques_scores;
        for (auto item : items) {
            if (item == 0) continue;
            int multipler = 1;
            int score = item;
            while (score < level){
                uniques_scores.insert(score);
                multipler++;
                score = multipler * item;
            }
        }
        return std::accumulate(uniques_scores.begin(), uniques_scores.end(), 0);
    }
}  // namespace sum_of_multiples
