// function call by refrence

//  changes are effect directly to orignal value using (&) sign

//  functions call by value 
#include <iostream>

using namespace  std;

void pourChai(int &cups){ // only use & sign change in orginal value
    cups += 5;
    cout << "Poured cups: " << cups << endl;
}



int main() {
    int chaiCups = 2;
    pourChai(chaiCups); // output = 7 // this is call by value
    cout << "Total cups are " << chaiCups << endl;  // output = 2   
    return 0;
}

