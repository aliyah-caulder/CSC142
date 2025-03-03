#pragma once
#include <iostream>

class Book
{
    private:
        std::string codeNum;
        std::string author;
        std::string title;
        int edition;
        std::string pubCode;
        double price;
    
    public:
        //Default Constructor
        inline Book(){}
        //Constructor
        inline Book(std::string cn, std::string au, std::string ti, int ed, std::string pc, double pr) {
            codeNum = cn;
            author = au;
            title = ti;
            edition = ed;
            pubCode = pc;
            price = pr;
        }
        //Getters
        inline std::string getTitle(){
            return title;
        }
        inline std::string getAuthor(){
            return author;
        }
        inline double getPrice(){
            return price;
        }
        inline int getEdition(){
            return edition;
        }
        inline std::string getISBN(){
            return codeNum;
        }
        inline std::string getPubCode(){
            return pubCode;
        }
        //This method changes the price
        inline void changePrice(double newPrice){
            price = newPrice;
        }
};