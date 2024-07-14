#include <iostream> // include for I/O streams

int main()
{
    int myInt;
    // print to stdout (or terminal/screen)
    // std::cout referring the access to the std namespace
    std::cout << "Enter your favorite number:\n";
    // Take in inpt
    std::cin >> myInt;

    // cout can also be formatted
    std::cout << "Your favorite number is " << myInt << '\n';
    // prints "your favourite number is <myInt>"

    // Note from Sahil: this std::cerr is like console.error("..") function in javascript.
    std::cerr << "Used for error messages\n";

    // flush strin stream buffer with new line
    std::cout << "I flused it away" << std::endl;
}