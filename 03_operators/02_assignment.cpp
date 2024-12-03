// Assignment Operators

#include <iostream>

using namespace std;

int main() {

    int teaBags;

    cout << "Enter the no of tea bags you have: ";
    cin >> teaBags;
    
    // if user have less than 10 bags give them 5 bags extra;

    if (teaBags <10){
        // teaBags = teaBags + 5;
        teaBags += 5; // we can also use this
        cout << "Total No of Bags: " << teaBags;
    }else {
        cout << "Total No of Bags: " << teaBags;
    }
     

    return 0;
}