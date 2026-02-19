// ERROR: FILE CORRUPTED. Please supply valid C++ Code.
#include <string>
namespace star_map{
    enum System{
        BetaHydri,
        Sol,
        EpsilonEridani,
        AlphaCentauri,
        DeltaEridani,
        Omicron2Eridani
    };
};
namespace heaven {

    class Vessel {
    public:    
    Vessel(std::string name, int num, star_map::System system = star_map::System::Sol);
    std::string name;
    int generation;
    star_map::System current_system;

    int busters = 0;

    Vessel replicate(std::string name);
    void make_buster();
    bool shoot_buster();

    };
    std::string get_older_bob(const Vessel& vessel_one, const Vessel& vessel_two);
    bool in_the_same_system(const Vessel& vessel_one, const Vessel& vessel_two);
};
