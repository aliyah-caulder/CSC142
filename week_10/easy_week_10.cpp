#include <iostream>

void drinkPotion(int& hitPoints, int healAmount) {
    hitPoints += healAmount;
    std::cout<<"You drank a potion that restored "<<healAmount<<" HP. You now have "<<hitPoints<<" HP."<<std::endl;
}

void damageHero(int* hitPoints) {
    *hitPoints -= 1;
}

int main() {
    //Declare an integer variable for the hero's hp
    int heroHitPoints{10};

    damageHero(&heroHitPoints);
    std::cout<<"-1 HP! you now have "<<heroHitPoints<<" HP."<<std::endl;
    damageHero(&heroHitPoints);
    std::cout<<"-1 HP! you now have "<<heroHitPoints<<" HP."<<std::endl;
    damageHero(&heroHitPoints);
    std::cout<<"-1 HP! you now have "<<heroHitPoints<<" HP."<<std::endl;

    drinkPotion(heroHitPoints, 3);

    //return 0 to indicate successful execution
    return 0;
}