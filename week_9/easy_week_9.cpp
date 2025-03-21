#include <iostream>
#include <cstdio>

int main() {
    // Declare variables
    std::string name;
    int age;

    //Prompt for input
    std::cout<<"Please enter your name: "<<std::endl;
    std::cin>>name;

    std::cout<<"Please enter your age: "<<std::endl;
    std::cin>>age;

    //Perform calculation
    int days = {age * 365};

    //print result
    std::cout<<"Hello, "<<name<<"! You are approximately "<<days<<" days old."<<std::endl;

    //return 0 to indicate successful execution
    return 0;
}