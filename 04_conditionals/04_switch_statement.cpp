// Switch statements

#include <iostream>

using namespace  std;

int main() {

    int choice;
    double price;

    cout << "Select Your tea\n";
    cout << "1. for Green Tea\n";
    cout << "2. for Lemon Tea\n";
    cout << "3. for Oolang Tea\n";
    cout << "Enter any one number: ";

    cin >> choice;

    switch (choice) {

        case 1:
            price = 2.0;
            cout << "You Selected Green Tea. Price = " << price << endl;
            break;
        case 2:
            price = 3.0;
            cout << "You Selected Lemon Tea. Price = " << price << endl;
            break;
        case 3:
            price = 4.0;
            cout << "You Selected Oolang Tea. Price = " << price << endl;
            break;
        default :
        cout << "Invalid Choice" << endl;        
    }
    

    return 0;
}