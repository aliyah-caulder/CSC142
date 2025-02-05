/*

-Roman.cpp
-Converts numbers 1-10 into roman numerals using a multi-branch if-statement
-Aliyah Caulder
-2/3/2025

*/
#include <iostream>

int main(){
    //Variable declarations
    int number;
    std::string roman;

    //do-while loop
    do {
        std::cout << "Enter a number 1-10 to convert to roman numerals: ";
        std::cin >> number;

    } while (number < 1 or number > 10);

    //if-statement
    if (number == 1) {
        roman = "I";
    }
    else if (number == 2) {
        roman = "II";

    }
    else if (number == 3) {
        roman = "III";
    }
    else if (number == 4) {
        roman = "IV";
    }
    else if (number == 5) {
        roman = "V";
    }
    else if (number == 6) {
        roman = "VI";
    }
    else if (number == 7) {
        roman = "VII";
    }
    else if (number == 8) {
        roman = "VIII";
    }
    else if (number == 9) {
        roman = "IX";
    }
    else {
        roman = "x";
    }

    //Print results
    std::cout<<"The roman numeral for that number is "<<roman<<"."<<std::endl;

    //Return 0 to indicate successful execution
    return 0;
}