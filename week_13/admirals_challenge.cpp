#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
    //Initialize input values
    double distance, fuel, spaceship_weight, life_support;
    int crew_size;

    //Take input
    std::cout << "Please enter the distance to the destination planet (in million kilometers): ";
    std::cin >> distance;

    std::cout << "\nPlease enter the amount of fuel available (in tons): ";
    std::cin >> fuel;

    std::cout << "\nPlease enter the crew size of your mission: ";
    std::cin >> crew_size;

    std::cout << "\nPlease enter your spaceship's weight (in tons): ";
    std::cin >> spaceship_weight;

    std::cout << "\nPlease enter the life support duration available (in days): ";
    std::cin >> life_support;

    //calculations
    double efficiency = (fuel / spaceship_weight) * 100;
    double speed = (fuel * 10000) / (crew_size * spaceship_weight);
    double time = (distance * 1000000) / speed;

    //outputs
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "\nFuel efficiency: " << efficiency << "%\n";

    std::cout << std::setprecision(0);
    std::cout << "Estimated speed: " << speed << " km/day\n";
    std::cout << "Estimated travel time: " << time << " days\n";

    //Check viability
    bool is_viable = (efficiency >= 20.0) &&
                    (life_support >= time + 10) &&
                    (crew_size >= 2 && crew_size <= 8) &&
                    (spaceship_weight < 500);

    //Mission viability output
    std::cout << "\nMission Status: ";
    if (is_viable) {
        std::cout << "VIABLE\n";
    } else {
        std::cout << "NOT VIABLE\n";
    }

    //return 0 to indicate successful execution
    return 0;

}