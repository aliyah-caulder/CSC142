#include <iostream>

int main() {

    //Announce the countdown is beginning
    std::cout<<"Countdown begin!"<<std::endl;

    //Loop from numbers 10 to 1, counting backwards
    for (int i = 10; i >= 1; --i) {
        std::cout<<i<<"...\n";
    }

    //Once loop is over, print liftoff message
    std::cout<<"Liftoff!"<<std::endl;

    //Return 0 to indicate successful execution.
    return 0;
}