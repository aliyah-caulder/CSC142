#include <iostream>

enum class Operation {
    //Enumeration of operations
    Add,
    Subtract,
    Multiply,
    Divide
};

class Calculator {
    private:
    Operation m_operation;

    public:
    Calculator();

    Calculator(Operation operation);

    int calculate(int a, int b);

    Operation get_operation() {
        return m_operation;
    }
};

Calculator::Calculator(Operation operation) : m_operation{operation} { }

int Calculator::calculate(int a, int b) {
    //Helper class to return a number when given an operation
    switch(get_operation()) {
        case Operation::Add: {
            return a + b;
        }
        case Operation::Subtract: {
            return a - b;
        }
        case Operation::Multiply: {
            return a * b;
        }
        case Operation::Divide: {
            return a / b;
        }
        default: {
            std::cout<<"Not an operator I know of."<<std::endl;
            break;
        }
    }
}

int main() {
    //Initializing calculator instances
    Calculator calc1 = {Operation::Add};
    Calculator calc2 = {Operation::Subtract};
    Calculator calc3 = {Operation::Multiply};
    Calculator calc4 = {Operation::Divide};

    std::cout<<"All operations completed with the numbers 6 and 3.\n"<<std::endl;

    //Printing results
    std::cout<<"Addition: "<<calc1.calculate(6,3)<<std::endl;
    std::cout<<"Subtraction: "<<calc2.calculate(6,3)<<std::endl;
    std::cout<<"Multiplication: "<<calc3.calculate(6,3)<<std::endl;
    std::cout<<"Division: "<<calc4.calculate(6,3)<<std::endl;

    //Return 0 to indicate successful execution
    return 0;

}