/*

-InventoryTester.cpp
-Tests the inventory class
-Aliyah Caulder
-3/2/25

*/
#include <iostream>
#include <cstdio>
#include "Inventory.h"

int main(){
    //Object creation
    //Inventory of size 10
    Inventory myInventory = Inventory(10);
    //Create books and add them to the inventory
    if (myInventory.addBook(Book(
        "013478796X", "Tony Gaddis", "Starting Out With Java: From Control Structures through Data Structures", 4, "PE", 121.75
        ))){
        std::cout<<"013478796X added to inventory successfully."<<std::endl;
    }
    else{
        std::cout<<"Failed to add 013478796X to inventory."<<std::endl;
    }

    if (myInventory.addBook(Book(
        "0321409493", "John Lewis", "Java Software Solutions: Foundations of Program Design", 5, "AW", 94.00
        ))){
        std::cout<<"0321409493 added to inventory successfully."<<std::endl;
    }
    else{
        std::cout<<"Failed to add 0321409493 to inventory."<<std::endl;
    }

    if (myInventory.addBook(Book(
        "0134743350", "Harvey Deitel", "Java How to Program, Early Objects", 12, "PE", 134.84
        ))){
        std::cout<<"0134743350 added to inventory successfully."<<std::endl;
    }
    else{
        std::cout<<"Failed to add 0134743350 to inventory."<<std::endl;
    }

    if (myInventory.addBook(Book(
        "002360692X", "Richard Johnsonbaugh", "Algorithms", 1, "PH", 109.00
        ))){
        std::cout<<"002360692X added to inventory successfully."<<std::endl;
    }
    else{
        std::cout<<"Failed to add 002360692X to inventory."<<std::endl;
    }

    if (myInventory.addBook(Book(
        "1593276036", "Eric Matthes", "Python Crash Course", 1, "NS", 39.95
        ))){
        std::cout<<"1593276036 added to inventory successfully."<<std::endl;
    }
    else{
        std::cout<<"Failed to add 1593276036 to inventory."<<std::endl;
    }

    if (myInventory.addBook(Book(
        "0143067889", "Ray Kurzweil", "The Singularity is Near", 1, "PG", 17.70
        ))){
        std::cout<<"0143067889 added to inventory successfully."<<std::endl;
    }
    else{
        std::cout<<"Failed to add 0143067889 to inventory."<<std::endl;
    }

    if (myInventory.addBook(Book(
        "0134444329", "Tony Gaddis", "Starting Out With Python", 4, "PE", 99.95
        ))){
        std::cout<<"0134444329 added to inventory successfully."<<std::endl;
    }
    else{
        std::cout<<"Failed to add 0134444329 to inventory."<<std::endl;
    }

    if (myInventory.addBook(Book(
        "0133582736", "Tony Gaddis", "Starting Out With Python", 3, "PE", 19.95
        ))){
        std::cout<<"0133582736 added to inventory successfully."<<std::endl;
    }
    else{
        std::cout<<"Failed to add 0133582736 to inventory."<<std::endl;
    }

    if (myInventory.addBook(Book(
        "013478796X", "Tony Gaddis", "Starting Out With Java: From Control Structures through Data Structures", 4, "PE", 145.38
        ))){
        std::cout<<"013478796X added to inventory successfully."<<std::endl;
    }
    else{
        std::cout<<"Failed to add 013478796X to inventory."<<std::endl;
    }

    if (myInventory.addBook(Book(
        "1119056553", "Cay Horstmann", "Python for Everyone", 2, "WI", 98.38
        ))){
        std::cout<<"1119056553 added to inventory successfully."<<std::endl;
    }
    else{
        std::cout<<"Failed to add 1119056553 to inventory."<<std::endl;
    }

    if (myInventory.addBook(Book(
        "0134802217", "Tony Gaddis", "Starting Out With Java: From Control Structures through Objects", 7, "PE", 188.95
        ))){
        std::cout<<"0134802217 added to inventory successfully."<<std::endl;
    }
    else{
        std::cout<<"Failed to add 0134802217 to inventory."<<std::endl;
    }

    if (myInventory.addBook(Book(
        "0134462017", "Tony Gaddis", "Starting Out With Java: Early Objects", 6, "PE", 58.50
        ))){
        std::cout<<"0134462017 added to inventory successfully."<<std::endl;
    }
    else{
        std::cout<<"Failed to add 0134462017 to inventory."<<std::endl;
    }

    //Print inventory the first time for initial results
    myInventory.printInventory();

    //Change prices of three of the books
    myInventory.changePrice("013478796X", 50.00);
    myInventory.changePrice("0143067889", 9.95);
    myInventory.changePrice("0134743350", 100.00);

    //Print inventory again to display the new prices
    myInventory.printInventory();

    //Return 0 to indicate successful execution
    return 0;
}