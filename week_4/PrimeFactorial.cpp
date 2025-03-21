/*

-PrimeFactorial.cpp
-Generates a random number and checks if it is prime. If it is prime, it calculates the factorial of that number.
-Aliyah Caulder
-2/12/2025

*/
#include <iostream>
#include <cstdio>
#include <ctime>
#include <string>
#include <format>

bool isPrime(int number){
    //This function uses a modulo loop to determine if a number is prime or not.
    if (number > 1) {
        for(int i = 2; i < number; i++){
            if ((number % i) == 0) {
                return false;
            }
        }
        return true;
    }
    else {
        //Not prime if the number is 1 or 0
        return false;
    }
}

double factorial(int number){
    //This function calculates the factorial of a given number.
    double product = 1;
    for(int i = 1; i <= number; i++){
        product *= i;
    }
    return product;
}

int main(){
    //Boolean declarations
    bool keepGoing = true;

    //Variable declarations
    std::string response;

    //Necessary for using rand
    srand(time(0));

    //Main loop
    while(keepGoing) {
        //Generate a random number less than 50
        int number = rand() % 50;

        std::cout<< "\nYour number is " << number << "." <<std::endl;

        if (isPrime(number)) {
            //If the number is prime, calc the factorial
            std::cout<< number << " is a prime number! The factorial of " << number << " is " << factorial(number) << "." <<std::endl;
        }
        else {
            //If it's not prime, print that fact and don't calc the factorial
            std::cout<< number << " is not a prime number." <<std::endl;
        }

        //Ask the user if they wish to keep going and if not, end the program.
        std::cout<< "Would you like to generate another number? (y/n): " <<std::endl;
        std::getline(std::cin, response);

        if (response == "n") {
            std::cout<< "Goodbye!" <<std::endl;
            keepGoing = false;
        }
    }
    //Return 0 to indicate successful execution
    return 0;
}