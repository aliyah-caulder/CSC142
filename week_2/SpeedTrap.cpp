/*

-SpeedTrap.cpp
-Checks if someone is speeding using conditional statements.
-Aliyah Caulder
-2/3/2025

*/
#include <iostream>

int main(){
    //Variable declarations
    int speed_limit;
    double driver_speed;

    //Prompt for user inputs
    std::cout<<"Please enter the speed limit: ";
    std::cin>>speed_limit;
    std::cout<<"Please enter the speed you were driving at: ";
    std::cin>>driver_speed;

    //If statement
    if (driver_speed <= speed_limit)
        std::cout<<"You are driving legally. Good job!"<<std::endl;
    else
        std::cout<<"You are speeding. You are getting a ticket."<<std::endl;

    //Return 0 to indicate successful execution
    return 0;
}