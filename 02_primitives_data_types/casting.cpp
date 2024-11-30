// Change one data types to another

#include <iostream>

using namespace std;

int main() {
    
    float teaPrice = 49.99;
    int roundedTeaPrice = (int) teaPrice; // convert to integer

    int teaQuantity = 2;
    double totalPrice = teaPrice * teaQuantity;

    cout << totalPrice << endl;

    return 0;
}