#include <iostream>
#include <string>
using namespace std;

int main() {
    string userTea;
    cout << "Please enter your favourite tea name: " << endl;
    getline(cin, userTea);

    int teaCups;
    cout << "How many tea cups do you require?" << endl;
    cin >> teaCups;

    cout << "The name of your favourite tea is " << userTea << " and you want "<< teaCups << " cups." << endl;

    return 0;
}