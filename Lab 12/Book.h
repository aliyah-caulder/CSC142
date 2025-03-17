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

    friend std::ostream& operator<<(std::ostream& output, Book book){
        char c_text[100];
        sprintf(c_text, 
                    "\n%-12.12s%-16.16s%-44.44s%2d%5s  $%7.2F", 
                    book.getISBN().c_str(), 
                    book.getAuthor().c_str(), 
                    book.getTitle().c_str(), 
                    book.getEdition(), 
                    book.getPubCode().c_str(), 
                    book.getPrice()
                );
        
        std::string text = c_text;
        output << text;

        return output;
    }

    friend bool operator==(Book& mainBook, Book& otherBook){
        if(mainBook.getISBN() == otherBook.getISBN()){
            return true;
        }
        else{
            return false;
        }
    }
};