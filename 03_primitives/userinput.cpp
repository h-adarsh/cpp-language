#include <iostream>
#include <string>
using namespace std;

int main() {
    string userTea;
    int teaQuantity;

    cout << "What would you like to order in tea\n";

    // method-1 : getline(cin, variable)
    //  - Reads the WHOLE line, including spaces ("Lemon Tea")
    //  - Stops at ENTER (new line). The new line is removed from input.
    //  - Needs <string>
    getline(cin, userTea);

    // ask for quantity
    //  - cin >> reads one value, stops at the first whitespace (space, tab, enter)
    //  - It leaves the ENTER in the input buffer
    cout << "how many cups of " << userTea << " would you like to have ? ";
    cin >> teaQuantity;

    cout << teaQuantity << " cups of " << userTea << endl;

    return 0;
}

// ============================================================
//  INPUT NOTES
// ============================================================
//  cin >> x          : reads ONE word/value, stops at whitespace
//  getline(cin, s)   : reads the full line (spaces allowed), stops at ENTER
//
//  Example, user types "Lemon Tea":
//    cin >> userTea;          -> userTea = "Lemon"   ("Tea" is left in the buffer)
//    getline(cin, userTea);   -> userTea = "Lemon Tea"
//
//  COMMON BUG : cin >> THEN getline
//    cin >> teaQuantity;       // leaves ENTER in the buffer
//    getline(cin, userTea);    // reads that leftover ENTER -> empty string, gets skipped
//    Fix: add  cin.ignore();  between them to throw away the leftover ENTER
//    (your code is safe because getline comes BEFORE cin >>)
//
//  INTERVIEW
//  - Q: cin vs getline?
//    A: cin >> stops at whitespace. getline reads the whole line.
//  - Q: Why does getline get skipped after cin >> ?
//    A: cin >> leaves the new line in the buffer. getline reads it as an empty line.
//  - Q: What if the user types text when cin >> expects an int?
//    A: cin goes into a fail state and the input is not read.