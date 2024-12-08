//  functions call by value 

// changes are effect in duplicate variable

#include <iostream>

using namespace  std;

void pourChai(int cups){
    cups += 5;
    cout << "Poured cups: " << cups << endl;
}

int main() {
    int chaiCups = 2;
    pourChai(chaiCups); // output = 7 // this is call by value
    cout << "Total cups are " << chaiCups << endl;  // output = 2   
    return 0;
}

