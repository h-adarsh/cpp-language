#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int userPrice;

    cout << "Please give the price for the tea: " << endl;
    cin >> userPrice;

    double increasedPrice = userPrice * 1.10;

    int finalPrice = static_cast<int>(round(increasedPrice));

    cout << "The final price is: " << finalPrice << endl;

    return 0;
}