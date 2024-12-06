// Nested If-else Statement

#include <iostream>

using namespace  std;

int main() {
    
    int cups;
    cout << "Enter the number of cups you order: ";
    cin >> cups;

    double pricePerCup = 2.5, totalPrice, discount;

    totalPrice = pricePerCup * cups;
   

    if(cups > 20){
        discount = 0.20;
        cout << "You got '20%' discount";
    }else if(cups >= 10 && cups <= 20){
        discount = 0.10;
    }else {
        discount = 0;
    }

    // totalPrice = totalPrice - (totalPrice * discount);
    totalPrice -= (totalPrice * discount);

    cout << "Total Price After Discount is: " << totalPrice << endl;


    return 0;
}