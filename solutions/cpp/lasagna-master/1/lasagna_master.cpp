#include "lasagna_master.h"

namespace lasagna_master {

// TODO: add your solution here
    int preparationTime(std::vector<std::string> layers, int time)
    {
        return layers.size() * time;
    }
    amount quantities(std::vector<std::string> layers)
    {
        amount need;
        for (std::string layer:layers)
        {
            if(layer == "noodles")
            {
                need.noodles += 50;
            }
            if(layer == "sauce")
            {
                need.sauce += 0.2;
            }
        }
        return need;
    }
    void addSecretIngredient(std::vector<std::string> &own, std::vector<std::string> reference)
    {
        std::string secret = reference.back();
        own.pop_back();
        own.push_back(secret);
    }
    void addSecretIngredient(std::vector<std::string> &own, std::string secret)
    {
        own.pop_back();
        own.push_back(secret);
    }

    std::vector<double> scaleRecipe(std::vector<double> quantities, int portions)
    {
        std::vector<double> scaled;
        for (auto need:quantities)
            {
                scaled.push_back(need * portions / 2);
            }
        return scaled;
    }

}  // namespace lasagna_master
