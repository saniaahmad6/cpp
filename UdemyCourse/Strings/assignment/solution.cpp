//**
    Get the input from the user and store it in a std::string variable
    Loop for each letter in the string entered by the user
    Determine how many blank spaces must be displayed before the current row and display them
    Determine how many letters must be displayed before the current character and display them
    Display the current character
    Display the remaining characters in reverse order
    Complete the row with a new line.
    There are many, many ways to solve this problem. 
    My solution is considering that the std::string .length() and .at() methods 
    use size_t as the type for the return value and parameter.
    You can also use int instead of size_t for this problem, but you will get 
    compiler warnings about int and size_t compatibility issues.**//
// Letter Pyramid
// Written by Frank J. Mitropoulos

#include <iostream>
#include <string>


int main()
{
    std::string letters{};

    std::cout << "Enter a string of letters so I can create a Letter Pyramid from it: ";
    getline(std::cin, letters);

    size_t num_letters = letters.length();

    int position {0};

    // for each letter in the string
    for (char c: letters) {

        size_t num_spaces = num_letters - position;
        while (num_spaces > 0) {
            std::cout << " ";
            --num_spaces;
        }

        // Display in order up to the current character
        for (size_t j=0; j < position; j++) {
            std::cout << letters.at(j);
        }

        // Display the current 'center' character
        std::cout << c;

        // Display the remaining characters in reverse order
        for (int j=position-1; j >=0; --j) {
            // You can use this line to get rid of the size_t vs int warning if you want
            auto k = static_cast<size_t>(j);
            std::cout << letters.at(k);
        }

        std::cout << std::endl; // Don't forget the end line
        ++position;
    }

    return 0;
}