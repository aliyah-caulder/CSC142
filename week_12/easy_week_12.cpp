#include <iostream>

int main() {
    //Initialize variables
    int num_potions;
    int potion_cost = 10;
    int player_coins = 100;

    //Introduce the shop
    std::cout<<"Welcome to the potions shop!"<<std::endl;
    std::cout<<"Each healing potion costs 10 gold."<<std::endl;

    //Ask for input here
    std::cout<<"How many healing potions would you like to buy? ";
    std::cin>>num_potions;

    //Perform calculations
    int total_cost = potion_cost * num_potions;

    //Determine if the player has enough coins
    if (total_cost > player_coins) {
        std::cout<<"You don't have enough coins to buy all these potions!"<<std::endl;
    }
    else {
        //since they have enough coins, print their remaining amount and wish them on their way
        std::cout<<"You bought "<<num_potions<<" potions for "<<total_cost<<" gold coins."<<std::endl;

        player_coins -= total_cost;

        std::cout<<"You now have "<<player_coins<<" gold pieces left. Safe travels, adventurer!"<<std::endl;
    }

    //return 0 to indicate successful execution
    return 0;

}