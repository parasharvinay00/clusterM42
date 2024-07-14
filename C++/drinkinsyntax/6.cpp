//////////
// Strings
//////////

// Strings in C++ are objects and have many member functions
#include <iostream>
#include <cstring>

int main()
{

    std::string myString = "Hello";
    std::string myOtherString = " World";

    // + is used for concatenation.
    std::cout << myString + myOtherString; // "Hello World"

    std::cout << "\n" + myString + " You\n"; // "Hello You"

    // C++ string length can be found from either string::length() or string::size()
    // std::cout << "\n" + myString.length() + myOtherString.size(); // Outputs 11 (= 5 + 6).

    // C++ strings are mutable.
    myString.append(" Dog");

    std::cout << myString; // "Hello Dog"

    // C++ can handle C-style strings with related functions using cstrings
    char myOldString[100] = "\nHello CPP ";
    std::cout << myOldString;
    std::cout << "\nLength = " << strlen(myOldString); // Length = 9
}