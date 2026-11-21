#include <iostream>
using namespace std;

int main() {

    int score;
    score = 100;

    // CONSTANT
    //  - const = value is FIXED, cannot change after it is set
    //  - Must be given a value at declaration
    //  - Changing it later = COMPILE ERROR
    const int uid = 232323;

    int balance = 550;
    int adarshBalance = 550;
    adarshBalance = 1000;

    cout << "Welcome to chai with cpp 1" << endl;
    cout << "Welcome to chai with cpp 2" << endl;
    cout << "Welcome to chai with cpp 3" << endl;

    return 0;
}

// DATA : a program does 3 things with data
//  1. STORE   : variables, constants, arrays, custom data structures (struct, class)
//  2. PROCESS : conditions (if-else, switch-case) + loops (for, while)
//  3. DISPLAY : output the result (cout -> console)