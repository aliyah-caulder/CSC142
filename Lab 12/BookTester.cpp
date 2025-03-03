/*

-BookTester.cpp 
-Tests the Book class and ensures it works properly
-Aliyah Caulder
-2/19/2025

*/
#include <iostream>
#include <cstdio>
#include "Book.h"

int main(){
    //Object creation
    Book book1 = Book(
        "013478796X", "Tony Gaddis", 
        "Starting Out With Java: From Control Structures through Data Structures", 
        4, "PE", 118.30
    );
    Book book2 = Book(
        "0321409493", "John Lewis", 
        "Java Software Solutions: Foundations of Program Design", 
        5, "AW", 94.05
    );
    Book book3 = Book(
        "0134743350", "Harvey Deitel", "Java How to Program, Early Objects",
        12, "PE", 134.84
    );

    //print in nice format
    std::cout<<"-----------------------------------------------------------------------------------------"<<std::endl;
    std::cout<<"ISBN        AUTHOR          TITLE                                       ED  PUB     PRICE"<<std::endl;
    printf("\n%-12.12s%-16.16s%-44.44s%2d%5s  $%7.2F", book1.getISBN().c_str(), book1.getAuthor().c_str(), book1.getTitle().c_str(), book1.getEdition(), book1.getPubCode().c_str(), book1.getPrice());
    printf("\n%-12.12s%-16.16s%-44.44s%2d%5s  $%7.2F", book2.getISBN().c_str(), book2.getAuthor().c_str(), book2.getTitle().c_str(), book2.getEdition(), book2.getPubCode().c_str(), book2.getPrice());
    printf("\n%-12.12s%-16.16s%-44.44s%2d%5s  $%7.2F", book3.getISBN().c_str(), book3.getAuthor().c_str(), book3.getTitle().c_str(), book3.getEdition(), book3.getPubCode().c_str(), book3.getPrice());
    std::cout<<"\n-----------------------------------------------------------------------------------------"<<std::endl;

    //Change price
    std::cout<<"Changing book1 price from $118.30 to $145.68"<<std::endl;
    book1.changePrice(145.68);
    std::cout<<"Changing book2 price from $94.05 to $117.79"<<std::endl;
    book2.changePrice(117.79);
    std::cout<<"Changing book3 price from $134.84 to $59.99"<<std::endl;
    book3.changePrice(59.99);

    //print in nice format
    std::cout<<"-----------------------------------------------------------------------------------------"<<std::endl;
    std::cout<<"ISBN        AUTHOR          TITLE                                       ED  PUB     PRICE"<<std::endl;
    printf("\n%-12.12s%-16.16s%-44.44s%2d%5s  $%7.2F", book1.getISBN().c_str(), book1.getAuthor().c_str(), book1.getTitle().c_str(), book1.getEdition(), book1.getPubCode().c_str(), book1.getPrice());
    printf("\n%-12.12s%-16.16s%-44.44s%2d%5s  $%7.2F", book2.getISBN().c_str(), book2.getAuthor().c_str(), book2.getTitle().c_str(), book2.getEdition(), book2.getPubCode().c_str(), book2.getPrice());
    printf("\n%-12.12s%-16.16s%-44.44s%2d%5s  $%7.2F", book3.getISBN().c_str(), book3.getAuthor().c_str(), book3.getTitle().c_str(), book3.getEdition(), book3.getPubCode().c_str(), book3.getPrice());
    std::cout<<"\n-----------------------------------------------------------------------------------------"<<std::endl;

}