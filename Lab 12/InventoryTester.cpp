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
    myInventory.addBook(Book(
        "013478796X", "Tony Gaddis", "Starting Out With Java: From Control Structures through Data Structures", 4, "PE", 121.75
    ));
    myInventory.addBook(Book(
        "0321409493", "John Lewis", "Java Software Solutions: Foundations of Program Design", 5, "AW", 94.00
    ));
    myInventory.addBook(Book(
        "0134743350", "Harvey Deitel", "Java How to Program, Early Objects", 12,
        "PE", 134.84
    ));
    myInventory.addBook(Book(
        "002360692X", "Richard Johnsonbaugh", "Algorithms", 1, "PH", 109.00
    ));
    myInventory.addBook(Book(
        "1593276036", "Eric Matthes", "Python Crash Course", 1, "NS", 39.95
    ));
    myInventory.addBook(Book(
        "0143067889", "Ray Kurzweil", "The Singularity is Near", 1, "PG", 17.70
    ));

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