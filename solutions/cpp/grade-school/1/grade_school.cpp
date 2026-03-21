#include <algorithm>
#include "grade_school.h"

namespace grade_school {

// TODO: add your solution here

    void school::add(std::string name, int grade){
        _roster[grade].push_back(name);
        std::sort(_roster[grade].begin(), _roster[grade].end());
    }
    const std::map<int, std::vector<std::string>>& school::roster() const {
        return _roster;
    }
    const std::vector<std::string>& school::grade(int grade) const {
        auto it = _roster.find(grade);
        if (it == _roster.end()){
            static const std::vector<std::string> empty;
            return empty;
        }
        return it -> second;
    }

}  // namespace grade_school
