/*

-LineNumbers.cpp
-Reads each line from a selected file and rewrites it to a new file with added line numbers.
-Aliyah Caulder
-2/9/2025

*/
#include <iostream>
#include <fstream>

int main(){
    //Variable declarations
    std::string readFile;
    std::string writeFile;
    std::string text;
    int lineNumber = 1;

    //Prompt for user inputs
    std::cout<<"Please enter the name of the file you want to read from: ";
    std::getline(std::cin, readFile);
    std::cout<<"Please enter the name of the file you want to rewrite the text to, with added line numbers: ";
    std::getline(std::cin, writeFile);

    //Read the selected file
    std::ifstream inFile(readFile);

    //Open the file to be written to
    std::ofstream outFile(writeFile);

    //Loop through the selected file, writing each line to the new file
    while (std::getline(inFile, text)) {
        outFile << lineNumber << ". " << text << std::endl;
        lineNumber++;
    }
    inFile.close();
    outFile.close();

    return 0;
}