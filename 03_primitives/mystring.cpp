#include <iostream>
#include <string>      // needed for string
using namespace std;

int main() {
    string favouriteTea = "Lemon Tea ";
    string description = "Known as \"best\" tea";   // \" lets you put " inside a string
    cout << favouriteTea << description << endl;

    // demo
    cout << "Chai\tCoffee\n";        // \t = tab, \n = new line
    cout << "C:\\cpp\\notes" << endl; // \\ = one backslash

    return 0;
}

// ============================================================
//  ESCAPE CHARACTER + ESCAPE SEQUENCE
// ============================================================
//  - ESCAPE CHARACTER : the backslash itself. It gives the next character a SPECIAL meaning.
//  - ESCAPE SEQUENCE  : backslash + character, together = ONE character.
//                       Example: \n, \t, \"
//  - Why needed: some characters cannot be typed directly in a string
//                (new line, tab) or clash with C++ syntax (" ' and backslash).
//  - Without it: "Known as "best" tea"  -> COMPILE ERROR (string ends at the 2nd ")

// ------------------------------------------------------------
//  IMPORTANT SEQUENCES
// ------------------------------------------------------------
//  \n   = new line
//  \t   = horizontal tab
//  \\   = backslash
//  \"   = double quote
//  \'   = single quote
//  \0   = NULL character (marks the end of a C-style string)
//  \r   = carriage return (cursor back to start of line)
//  \b   = backspace
//  \a   = bell / alert sound
//  \v   = vertical tab
//  \f   = form feed
//  \?   = literal question mark
//  \ooo = character by OCTAL value
//  \xhh = character by HEX value

// ------------------------------------------------------------
//  NOTES
// ------------------------------------------------------------
//  - \n is ONE character, not two.
//  - '\n' vs endl : '\n' = new line only. endl = new line + FLUSH (slower).
//  - Windows paths need \\ :  "C:\\Users\\Adarsh"
//  - In a '...' char literal, \' is needed. In a "..." string, \" is needed.
//
//  INTERVIEW
//  - Q: What is an escape sequence?
//    A: A backslash + character that represents ONE special character.
//  - Q: How do you print a backslash?
//    A: Write two backslashes (\\) in the string.
//  - Q: What does \0 do?
//    A: NULL character. Marks the end of a C-style string.