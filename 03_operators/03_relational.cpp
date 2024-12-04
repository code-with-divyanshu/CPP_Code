// Relational Operators

#include <iostream>

using namespace std;

int main() {

    int teaCups;

    cout << "Enter the no of tea Cups you Buy: ";
    cin >> teaCups;
    
    // based on teaCups (no of tea cups) give users a badge;

    if (teaCups > 20){
        cout << "You Got Special \"Gold\" Badge, You Buy : " << teaCups << " No of tea cups";
    } else if (teaCups >= 10 && teaCups <= 20) {
        cout << "You Got Special \"Silver\" Badge, You Buy : " << teaCups << " No of tea cups";
    } else {
        cout << "You Buy " << teaCups << " No of cups";
    }
    

    return 0;
}