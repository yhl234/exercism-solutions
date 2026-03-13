#include "power_of_troy.h"

namespace troy {
    void give_new_artifact(human& human, std::string name){
        human.possession = std::make_unique<artifact>(name);
    }
    void exchange_artifacts(std::unique_ptr<artifact>& artifact_one, std::unique_ptr<artifact>& artifact_two){
        std::swap(artifact_one, artifact_two);
    }
    void manifest_power(human& human, std::string name){
        human.own_power = std::make_shared<power>(name);
    }
    void use_power(human& caster, human& target){
        target.influenced_by = caster.own_power;
    }
    int power_intensity(human& caster){
        if(caster.own_power == nullptr) return 0;
        return caster.own_power.use_count();
    }




}  // namespace troy
