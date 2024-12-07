//  Nested Loop

#include <iostream>
#include <string>

using namespace  std;

int main() {

    string teaTypes[4] = {"Oolong tea", "Green Tea", "Black Tea", "Lemon Tea"};


    for (int i = 0; i < 4; i++){
           cout << "Brewing " << teaTypes[i] << endl;
        for (int j = 1; j <= 3; j++){
            cout << "Serving " << teaTypes[i] << " Cup " << j << endl;

        }
        
    }
    


    return 0;
}