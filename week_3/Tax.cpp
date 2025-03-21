/*

-Tax.cpp
-Calculates tax and total purchase amount of a purchase, and displays the results.
-Aliyah Caulder
-2/5/2025

*/
#include <iostream>
#include <cstdio>
#include <string>
#include <format>

int main(){
    //Constant declarations
    const float SALES_TAX_RATE = 0.06;

    //Boolean declarations
    bool keepGoing = true;

    //Variable declarations
    std::string desc;
    std::string costString;
    std::string response;
    double costValue;
    double sales_tax;
    double total;

    //Loop
    while(keepGoing) {
        //Prompt the user to input a string describing the purchase
        std::cout<<"Please enter a description of the purchase: ";
        std::getline(std::cin, desc);

        //Prompt the user to enter a string which is the cost of the purchase in dollars and cents.
        //Use a do-while loop to ensure no negative numbers.
        do {
            std::cout<<"Please enter the cost of the purchase (in dollars and cents): ";
            std::getline(std::cin, costString);

            costValue = std::stod(costString);
            
        }while(costValue < 0);

        //Calculate the sales tax on the purchase
        sales_tax = costValue * SALES_TAX_RATE;

        //Calculate the total amount of the purchase
        total = costValue + sales_tax;

        //Display the input data and calculated results
        std::cout<<"\n";
        std::cout<<"You bought " + desc + "."<<std::endl;

        printf("Sales tax on this item was $%.2f\n", sales_tax);
        printf("Your total cost comes to $%.2f\n", total);

        //Ask the user if they want to add another purchase, and if not, end the program.
        std::cout<<"Would you like to enter another purchase? (y/n): ";
        std::getline(std::cin, response);

        if (response == "n") {
            keepGoing = false;
        }
    }
    //Return 0 to indicate successful execution
    return 0;
}