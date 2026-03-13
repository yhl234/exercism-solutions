#pragma once

#include <string>
#include <memory>

namespace troy {

struct artifact {
    // constructors needed (until C++20)
    artifact(std::string name) : name(name) {}
    std::string name;
};

struct power {
    // constructors needed (until C++20)
    power(std::string effect) : effect(effect) {}
    std::string effect;
};

class human {
public:
    std::unique_ptr<artifact> possession;
    std::shared_ptr<power> own_power;
    std::shared_ptr<power> influenced_by;
};
void give_new_artifact(human& human, std::string name);

void exchange_artifacts(std::unique_ptr<artifact>& artifact_one, std::unique_ptr<artifact>& artifact_two);

void manifest_power(human& human, std::string name);

void use_power(human& caster, human& target);

int power_intensity(human& caster);
}  // namespace troy
