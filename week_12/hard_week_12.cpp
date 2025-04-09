#include <iostream>
#include <cstdlib>
#include <ctime>

int rollDice(int sides) {
    return (rand() % sides) + 1;
}

int main() {
    //init random number generator?
    srand(time(0));

    //initialize variables
    int hero_hp = 20;
    int hero_ac = 15;
    int goblin_hp = 10;
    int goblin_ac = 12;

    //Print message to start fight
    std::cout<<"The Hero faces off against the Goblin!"<<std::endl;

    //While loop to keep combat going until either hp is 0 or lower.
    while (hero_hp > 0 && goblin_hp > 0) {
        //Hero's turn
        std::cout<<"Hero's turn!"<<std::endl;

        //Roll to see if damage is dealt
        int hero_roll = rollDice(20);
        std::cout<<"Hero rolls a "<<hero_roll;
        if (hero_roll >= goblin_ac) {
            std::cout<<" and hits the Goblin!"<<std::endl;
            //Roll to see how much damage is dealt
            int hero_damage = rollDice(8);
            goblin_hp -= hero_damage;
            std::cout<<"Hero deals "<<hero_damage<<" damage."<<std::endl;
            
            //See if goblin is out of hp
            if (goblin_hp > 0) {
                std::cout<<"Goblin has "<<goblin_hp<<" HP remaining."<<std::endl;
            } else {
                break;
            }
        } else {
            std::cout<<" and misses!"<<std::endl;
        }

        //Goblin's turn
        std::cout<<"Goblin's turn!"<<std::endl;

        //Roll to see if damage is dealt
        int goblin_roll = rollDice(20);
        std::cout<<"Goblin rolls a "<<goblin_roll;
        if (goblin_roll >= hero_ac) {
            std::cout<<" and hits the hero!"<<std::endl;
            //Roll to see how much damage is dealt
            int goblin_damage = rollDice(6);
            hero_hp -= goblin_damage;
            std::cout<<"Goblin deals "<<goblin_damage<<" damage."<<std::endl;

            //See if hero is out of hp
            if (hero_hp > 0) {
                std::cout<<"Hero has "<<hero_hp<<" HP remaining."<<std::endl;
            } else {
                break;
            }
        } else {
            std::cout<<" and misses!"<<std::endl;
        }

    }

    //Print results of the battle

    if (hero_hp > 0) {
        std::cout<<"Goblin has been deafeated! Hero wins!"<<std::endl;
    } else {
        std::cout<<"Hero has been defeated! Goblin wins!"<<std::endl;
    }

    //Return 0 to indicate successful execution
    return 0;

}