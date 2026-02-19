// ERROR: FILE CORRUPTED. Please supply valid C++ Code.

#include "doctor_data.h"

namespace heaven {
Vessel::Vessel(std::string name, int num, star_map::System system) 
    : name(name), 
    generation(num),
    current_system(system)
{};

Vessel Vessel::replicate(std::string name){
    Vessel cloned(name, generation + 1, current_system);
    return cloned;
}

void Vessel::make_buster(){
    busters++;
};

bool Vessel::shoot_buster(){
    busters--;
    return busters >= 0;
};

std::string get_older_bob(const Vessel& vessel_one, const Vessel& vessel_two){
    return vessel_one.generation < vessel_two.generation ? vessel_one.name : vessel_two.name;
};

bool in_the_same_system(const Vessel& vessel_one, const Vessel& vessel_two){
    return vessel_one.current_system == vessel_two.current_system; 
};
}