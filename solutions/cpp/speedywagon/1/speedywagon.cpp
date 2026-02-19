#include "speedywagon.h"

namespace speedywagon {

// Enter your code below:
bool connection_check(pillar_men_sensor* ptr){
    return ptr != nullptr;
}

int activity_counter(pillar_men_sensor* ptr, int capacity){
    int activity = 0;
    for (int i = 0; i < capacity; i++){
        activity += (ptr + i)->activity;
    }
    return activity;
}

// Please don't change the interface of the uv_light_heuristic function
int uv_light_heuristic(std::vector<int>* data_array) {
    double avg{};
    for (auto element : *data_array) {
        avg += element;
    }
    avg /= data_array->size();
    int uv_index{};
    for (auto element : *data_array) {
        if (element > avg) ++uv_index;
    }
    return uv_index;
}

bool alarm_control(pillar_men_sensor* ptr){
    if(!connection_check(ptr)) return false;
    if(ptr->activity > 0) return true;
    return false;
}
bool uv_alarm(pillar_men_sensor* ptr){
    if(!connection_check(ptr)) return false;
    if(uv_light_heuristic(&(ptr->data)) > ptr->activity){
        return true;
    }else{
        return false;
    }
}


}  // namespace speedywagon
