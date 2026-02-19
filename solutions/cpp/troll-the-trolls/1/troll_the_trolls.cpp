namespace hellmath {

// TODO: Task 1 - Define an `AccountStatus` enumeration to represent the four
// account types: `troll`, `guest`, `user`, and `mod`.
    enum class AccountStatus{
        troll,
        guest,
        user,
        mod
    };

// TODO: Task 1 - Define an `Action` enumeration to represent the three
// permission types: `read`, `write`, and `remove`.
    enum class Action{
        read,
        write,
        remove
    };
// TODO: Task 2 - Implement the `display_post` function, that gets two arguments
// of `AccountStatus` and returns a `bool`. The first argument is the status of
// the poster, the second one is the status of the viewer.
    bool display_post(AccountStatus poster, AccountStatus viewer){
        if(viewer != AccountStatus::troll) return poster != AccountStatus::troll;
        return true;
    }
// TODO: Task 3 - Implement the `permission_check` function, that takes an
// `Action` as a first argument and an `AccountStatus` to check against. It
// should return a `bool`.
    bool permission_check(Action action, AccountStatus status){
        switch (status){
            case AccountStatus::mod:
                return true;
            case AccountStatus::user:
            case AccountStatus::troll:
                return action != Action::remove;
            case AccountStatus::guest:        
                return action == Action::read;
            default:
                return false;
        };
    }

// TODO: Task 4 - Implement the `valid_player_combination` function that
// checks if two players can join the same game. The function has two parameters
// of type `AccountStatus` and returns a `bool`.
    bool valid_player_combination(AccountStatus player_one, AccountStatus player_two){
        if(player_one == AccountStatus::troll && player_two == AccountStatus::troll) return true;
        if(
            player_one == AccountStatus::guest || 
            player_two == AccountStatus::guest || 
            player_one == AccountStatus::troll || 
            player_two == AccountStatus::troll
            ) return false;
        return true;
    }
// TODO: Task 5 - Implement the `has_priority` function that takes two
// `AccountStatus` arguments and returns `true`, if and only if the first
// account has a strictly higher priority than the second.
    int get_weight(AccountStatus status){
        switch(status){
            case AccountStatus::mod:
                return 4;
            case AccountStatus::user:
                return 3;
            case AccountStatus::guest:
                return 2;
            case AccountStatus::troll:
                return 1;
            default:
                return 0;
        }
    }
    bool has_priority(AccountStatus status_one, AccountStatus status_two){
        return get_weight(status_one) > get_weight(status_two);
    }
}  // namespace hellmath
