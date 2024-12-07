//  For loop

#include <iostream>

using namespace  std;

int main() {

    int cups;
    cout << "Enter the no of cups you want ";
    cin >> cups;

    for (int i = 1; i <= cups; i++){
      cout << "Brewing a cup of tea " << i << endl;
    }
    
    return 0;
}