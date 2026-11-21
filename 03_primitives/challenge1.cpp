#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    string teaType;     
    float price;    
    char rating;        

    cout << fixed << setprecision(2);   

    cout << "Tea Information Display\n";
    cout << "Tea\t\t\tPrice/kg\tRating\n";

    teaType = "English Tea";
    price = 500.50f;
    rating = 'A';
    cout << teaType << "\t\t" << "Rs " << price << "\t" << rating << "\n";

    teaType = "Morning Tea";
    price = 350.9f;
    rating = 'A';
    cout << teaType << "\t\t" << "Rs " << price << "\t" << rating << "\n";

    teaType = "Lemon Tea";
    price = 100;
    rating = 'A';
    cout << teaType << "\t\t" << "Rs " << price << "\t" << rating << "\n";

    teaType = "Green Tea";
    price = 200.1f;
    rating = 'A';
    cout << teaType << "\t\t" << "Rs " << price << "\t" << rating << "\n";

    return 0;
}

// WHAT WAS WRONG IN THE FIRST VERSION
//  1. int tea1 = English Tea;   -> text must be a string, and in double quotes: "English Tea"
//  2. float price = 500.50/kg   -> "/kg" is not valid C++. Store only the number: 500.50f
//  3. char rating = A           -> a char needs single quotes: 'A'
//  4. Missing semicolons at the end of lines
//  5. Same variable names declared 4 times in one scope -> error. Declare once, reassign after.
//  6. Nothing was printed. The task asks for formatted output.
//
// NOTES
//  - f after a number (500.50f) makes it a float. Without f it is a double.
//  - \t = tab, \n = new line (escape sequences)
//  - fixed + setprecision(2) = exactly 2 digits after the decimal point
//  - Tab alignment depends on the terminal. setw() gives exact alignment.