// if-else statement

#include <iostream>

using namespace  std;

int main() {
    int currentHour;
    cout << "Enter Currnet Hour: ";
    cin >> currentHour;

    if(currentHour >= 8 && currentHour <= 18){
        cout << "Tea shop is open";
    }else {
        cout << "Tea shop is closed";
    }

    return 0;
}