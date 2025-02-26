#pragma once
#include "Book.h"
#include <iostream>
#include <cstdio>

class Inventory
{
    private:
        Book* books;
        int nextEntry;
        int length;

    public:

        inline Inventory(int size){
            //constructor
            books = new Book[size]{};
            nextEntry = 0;
            length = size;
        }
        inline ~Inventory(){
            //destructor
            delete[] books;
        }

        inline bool addBook(Book theBook){
            //addBook
            if(nextEntry < length){
                books[nextEntry] = theBook;
                nextEntry += 1;
                return true;
            }
            else{
                return false;
            }
        }
        inline void changePrice(std::string isbn, double newPrice){
            //changePrice
            for (int i = 0; i < length; i++){
                if(books[i].getISBN() == isbn){
                    books[i].changePrice(newPrice);
                }
            }
        }
        inline void printInventory(){
            //printInventory
            std::cout<<"-----------------------------------------------------------------------------------------"<<std::endl;
            std::cout<<"ISBN        AUTHOR          TITLE                                       ED  PUB     PRICE"<<std::endl;
            for (int i = 0; i < length; i++){
                printf("\n%-12.12s%-16.16s%-44.44s%2d%5s  $%7.2F", 
                    books[i].getISBN().c_str(), 
                    books[i].getAuthor().c_str(), 
                    books[i].getTitle().c_str(), 
                    books[i].getEdition(), 
                    books[i].getPubCode().c_str(), 
                    books[i].getPrice()
                    );
            }
            std::cout<<"-----------------------------------------------------------------------------------------"<<std::endl;
        }
};