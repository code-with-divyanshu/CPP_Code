// if statement

#include <iostream>
#include <string>

using namespace  std;

int main() {

    string userTea;
    cout << "Enter Tea What you want to buy: ";
    getline(cin, userTea);

    if (userTea == "Green Tea"){
       cout << "Your order " << userTea << " is confirmed";
    }
    
    return 0;
}