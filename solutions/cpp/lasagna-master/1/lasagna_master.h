#pragma once
#include <vector>
#include <string>

namespace lasagna_master {

struct amount {
    int noodles = 0;
    double sauce = 0;
};
int preparationTime(std::vector<std::string> layers, int time = 2);
amount quantities(std::vector<std::string> layers);
void addSecretIngredient(std::vector<std::string> &own, std::vector<std::string> reference);
void addSecretIngredient(std::vector<std::string> &own, std::string secret);
std::vector<double> scaleRecipe(std::vector<double> quantities, int portions);

}  // namespace lasagna_master
