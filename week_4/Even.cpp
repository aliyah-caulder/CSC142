/*

-Even.cpp
-Generates 1,000 random numbers and states how many of those numbers are even.
-Aliyah Caulder
-2/10/2025

*/
#include <iostream>
#include <ctime>

bool isEven(int number){
    //This function uses modulo to determine if a number is even or not
    if ((number % 2) == 0) {
        return true;
    }
    else {
        return false;
    }
}

int main() {
    //Variable declarations
    int count = 0;

    //This line of code is necessary for using rand
    srand(time(0));

    //This loop generates random numbers and calls the isEven function to decide if they are even
    for(int i = 0; i < 1000; i++){
        int number = rand() % 101;
        if (isEven(number)) {
            //If the number is even, add that to the counter
            count++;
        }
    }

    //Results
    std::cout << "Out of 1,000 randomly generated numbers between 0 and 100, " << count << " of them were even." << std::endl;

    //Return 0 to indicate successful execution
    return 0;
}