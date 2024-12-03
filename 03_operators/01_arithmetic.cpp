// Arithmatic operators

#include <iostream>

using namespace std;

int main() {

    int cups;
    double pricePerCup, totalPrice, discountedPrice;

    cout << "Enter The number of Tea Cups: ";
    cin >> cups;

    cout << "Enter the price per cup: ";
    cin >> pricePerCup;

    totalPrice = cups * pricePerCup;

    // apply 5% discount if total price  is above 200

    if (totalPrice > 200){
        discountedPrice = totalPrice - (totalPrice * 0.05);
        cout << "Discounted Price is: " << discountedPrice;
    }else {
        cout << "Total Price is: " << totalPrice;
    }
     

    return 0;
}