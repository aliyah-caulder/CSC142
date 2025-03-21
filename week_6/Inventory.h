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
                std::cout<<"\nBook added successfully!"<<std::endl;
                return true;
            }
            else{
                std::cout<<"\nThe inventory is full."<<std::endl;
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
                    printf("\n%-12.12s%-16.16s%-44.44s%2d%5s  $%7.2F", 
                        books[i].getISBN().c_str(), 
                        books[i].getAuthor().c_str(), 
                        books[i].getTitle().c_str(), 
                        books[i].getEdition(), 
                        books[i].getPubCode().c_str(), 
                        books[i].getPrice()
                        );
                }
            }
            std::cout<<"\n-----------------------------------------------------------------------------------------"<<std::endl;
        }
};