// Basic of Array 
// function accept array as a defaut behavior(parameter)

#include <iostream>

using namespace  std;

int totalChaiServed(int chai[], int size){
    int total = 0;
    for (int i = 0; i < size; i++){
        total += chai[i];
    }
    return total;  
}

int main() {

    int chaiServed[7] = {50, 60, 58, 72, 80, 94, 23};   

    int total = totalChaiServed(chaiServed, 7);

    cout << "Total Chai Served This Week " << total;

    return 0;
}