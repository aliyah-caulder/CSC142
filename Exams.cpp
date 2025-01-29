/*

Week 2 Lab 3 assignment - Exams.cpp
This program recieves input of 3 grades and calculates the average, displaying values to 2 decimal points.
Aliyah Caulder
1/29/25

*/

#include <iostream>
#include <cstdio>
#include <string>
#include <format>

int main() {
    // Variable declarations
    std::string name;
    int score1;
    int score2;
    int score3;
    float avg;

    // Prompt for user inputs
    // Ensure that when typing input in the console, you give a whole number for scores,
    // otherwise you might run into miscalculations
    std::cout<<"What is your name? ";
    std::getline(std::cin, name);
    std::cout<<"Enter the first exam score: ";
    std::cin>>score1;
    std::cout<<"Enter the second exam score: ";
    std::cin>>score2;
    std::cout<<"Enter the third exam score: ";
    std::cin>>score3;

    // Calculate the results
    avg = (score1 + score2 + score3) / 3;

    // Print the user inputs and final results
    std::cout<<"\n";
    std::cout<<"Hello, " + name + ":"<<std::endl;
    std::cout<<"Your three exam scores are  " << score1 << ", " << score2 << ", and " << score3 << "." <<std::endl;

    printf("Your average exam score is %.2f\n", avg);

    return 0;
}