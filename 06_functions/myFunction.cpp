// functions

// returnType functionName(parameter) {
    // function body
// }

#include <iostream>

using namespace  std;

int checkTemparature(int temperature){
    return temperature;
}

// declaration of function

void serveChai(int cups);

void makeChai() {
    cout << "Boiling water, adding tea leaves, straining..." << endl;
}


// function overloading can do by
void serveChai(string teaType = "Green Tea") { // another data type
    cout << "Serving "<< teaType << endl;
}

void serveChai(int cup, int tealeaves) { // no of parameters
    cout << "Making " << cup << " of tea using " << tealeaves << " tealeaves" << endl; 
}

int main() {
   int temp = checkTemparature(12);
//    cout << temp << endl;
    // makeChai(); // calling a function
   serveChai(3);
   serveChai("Masala Tea");
   serveChai(3,18);
    return 0;
}

// defination of functionn
void serveChai(int cups){
    cout << "Serving " << cups << " of Chai" << endl;
}