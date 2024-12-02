// get input from user

#include <iostream>
#include <string>

using namespace std;

int main() {
    string userTea;
    int teaQuantity;

    cout << "What would you like to order in tea? \n";
    getline(cin, userTea);

    // ask for quantity
    cout << "How many cups of" << userTea << "would you like to have? \n";
    cin >> teaQuantity;

    cout << "Your order is " << teaQuantity <<  " cups of " << userTea << endl;

    return 0;
}