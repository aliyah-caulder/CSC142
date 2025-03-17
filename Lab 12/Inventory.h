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
                for (int i = 0; i < length; i++){
                    if (theBook == books[i]){
                        return false;
                    }
                }
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
                    std::cout<<"\nChanging price of "<<books[i].getTitle()<<" to "<<newPrice<<"."<<std::endl;
                }
            }
        }
        inline void printInventory(){
            //printInventory
            std::cout<<"\n-----------------------------------------------------------------------------------------"<<std::endl;
            std::cout<<"ISBN        AUTHOR          TITLE                                       ED  PUB     PRICE"<<std::endl;
            for (int i = 0; i < length; i++){
                if (books[i].getEdition() > 0){
                    std::cout<<books[i];
                }
            }
            std::cout<<"\n-----------------------------------------------------------------------------------------"<<std::endl;
        }
};