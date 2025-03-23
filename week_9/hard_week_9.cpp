#include <iostream>
#include <string>

enum class CharacterClass {
    Warrior,
    Mage,
    Archer,
    Rogue
};

struct Character {
    std::string name;
    CharacterClass type;
    int health;
    float strength;
};

//Helper
std::string classToString(CharacterClass type) {
    switch(type) {
        case CharacterClass::Warrior: return "Warrior";
        case CharacterClass::Mage: return "Mage";
        case CharacterClass::Archer: return "Archer";
        case CharacterClass::Rogue: return "Rogue";
        default: return "Unknown";
    }
}

int main() {
    //Array of characters initialization
    Character characters[4] {
        {"Christopher", CharacterClass::Warrior, 100, 90.5f},
        {"Felix", CharacterClass::Mage, 120, 75.0f},
        {"Samuel", CharacterClass::Mage, 85, 80.0f},
        {"Peter", CharacterClass::Rogue, 80, 60.5f},
    };

    //Display character's details
    std::cout<<"Characters:\n-----------\n";

    for (int i = 0; i < 4; i++) {
        std::cout<<"Name: "<<characters[i].name<<", Type: "<<classToString(characters[i].type)<<", Health: "<<characters[i].health
            <<", Strength: "<<characters[i].strength<<std::endl;
    }

    //Calculate average health
    int sumHealth = 0;

    for (int i = 0; i < 4; i++) {
        sumHealth += characters[i].health;
    }
    float avgHealth = static_cast<float>(sumHealth) / 4.0f;

    std::cout<<"\nAverage Health: "<<avgHealth<<std::endl;

    //Return 0 to indicate successful execution
    return 0;
}