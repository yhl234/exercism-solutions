#pragma once
#include <vector>
#include <string>
#include <map>

namespace grade_school {

// TODO: add your solution here
    class school{
    public:
        void add(std::string name, int grade);
        const std::map<int, std::vector<std::string>>& roster() const;
        const std::vector<std::string>& grade(int grade) const;
    private:
    std::map<int, std::vector<std::string>> _roster;
    };

}  // namespace grade_school
