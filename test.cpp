#include <iostream>


//Required: int main(){}
//cl [name.cpp] in terminal required to compile the project
//simply type the name in the terminal to open the project.
//to remove the annoying compile errors that are pointless 
//use /EHsc at the end of the compile line to remove.
int main(){
    std::cout << "Hello, Thief!";
    std::cout << std::endl;
    std::cout << "You seem to be breaking into somewhere!";
    std::cout << std::endl;
    std::cout << "You need to enter the correct code to get in though...";
    
    int a = 4;
    int b = 6;
    const int c = 8;
    int sum = a + b + c;
    int product = a * b * c;


    a = 5;

    //You can output line breaks inline by using more stream calls <<
    std::cout << std::endl;
    std::cout << a + b + c << std::endl;
    std::cout << sum << std::endl;
    std::cout << product << std::endl;

    return 0;
}

