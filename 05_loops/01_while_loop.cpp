// while loop

#include <iostream>

using namespace  std;

int main() {

    int cups;
    cout << "Enter the numbers tea cups to server: ";
    cin >> cups;



    while (cups > 0){
        cups--;
        cout << "Serving a cup of tea \n" << cups << " remaning" << endl;
    }
    

    cout << "All tea cups are served";

    return 0;
}