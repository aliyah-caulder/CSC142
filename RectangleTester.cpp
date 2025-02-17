/*

-RectangleTester.cpp
-Uses a header file with a rectangle class to calculate and display the areas of different rooms. 
-Aliyah Caulder
-2/17/2025

*/

#include <iostream>
#include "Rectangle.h"

int main(){
    //Variable declarations
    double num;

    //Object creation
    Rectangle kitchen;
    Rectangle bedroom;
    Rectangle livingRoom;

    //Ask for lengths and widths of each room
    std::cout<<"Enter the length of the kitchen: "<<std::endl;
    std::cin>>num;
    kitchen.setLength(num);

    std::cout<<"Enter the width of the kitchen: "<<std::endl;
    std::cin>>num;
    kitchen.setWidth(num);

    std::cout<<"Enter the length of the bedroom: "<<std::endl;
    std::cin>>num;
    bedroom.setLength(num);

    std::cout<<"Enter the width of the bedroom: "<<std::endl;
    std::cin>>num;
    bedroom.setWidth(num);

    std::cout<<"Enter the length of the living room: "<<std::endl;
    std::cin>>num;
    livingRoom.setLength(num);

    std::cout<<"Enter the width of the living room: "<<std::endl;
    std::cin>>num;
    livingRoom.setWidth(num);

    //Print resulting areas of each room and the total house
    std::cout<<"The kitchen is "<<kitchen.getLength()<<" x "<<kitchen.getWidth()<<", with an area of "<<kitchen.getArea()<<" sq ft."<<std::endl;
    std::cout<<"The bedroom is "<<bedroom.getLength()<<" x "<<bedroom.getWidth()<<", with an area of "<<bedroom.getArea()<<" sq ft."<<std::endl;
    std::cout<<"The living room is "<<livingRoom.getLength()<<" x "<<livingRoom.getWidth()<<", with an area of "<<livingRoom.getArea()<<" sq ft."<<std::endl;
    std::cout<<"The total of all three rooms is "<<kitchen.getArea() + bedroom.getArea() + livingRoom.getArea()<<" sq ft."<<std::endl;

    //return 0 to indicate successful execution
    return 0;
}