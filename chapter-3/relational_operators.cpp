#include<iostream>

int main(){
    int number1 {50};
    int number2 {50};

    std::cout << "Number1 : " << number1 << std::endl;
    std::cout << "number2 : " << number2 << std::endl;

    std::cout << std::endl;
    std::cout << "Comparing variables" <<std::endl;

    std::cout << std::boolalpha ; // Make bool show up as true/false instead of 1/0
    // Stress the need for parentheses here
    std::cout << "number1 < number2 : " << (number1 < number2) << std::endl;
    std::cout << "number1 <= number2 : " << (number1 <= number2) << std::endl;
    std::cout << "number1 > number2 : " << (number1 > number2) << std::endl;
    std::cout << "number1 >= number2 : " << (number1 >= number2) << std::endl;
    std::cout << "number1 == number2 : " << (number1 == number2) << std::endl;
    std::cout << "number1 != number2 : " << (number1 != number2) << std::endl;
    
     std::cout << std::endl;
     std::cout << "Store comparison result and use it later" << std::endl;

     bool result = (number1 == number2);
     std::cout << "Result : " << result << std::endl;
    return 0;
}