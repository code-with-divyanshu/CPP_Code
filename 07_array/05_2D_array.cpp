// 2-D Array 

#include <iostream>

using namespace std;

int main(){

    int chaiSales[3][7] = {
        {50, 60, 55, 70, 65, 80, 75}, // shop 1 sales for 7 days
        {40, 55, 60, 65, 70, 75, 80}, // shop 1 sales for 7 days
        {45, 50, 55, 60, 65, 70, 75} // shop 1 sales for 7 days
    }; 

    for (int i = 0; i < 3; i++){
        cout << "I am at shop: " << i + 1 << endl;
        cout << "Total Sales This Week are: " << endl;
        for (int j = 0; j < 7;  j++){
            cout << "Sales for day " << j + 1 << " " << chaiSales[i][j] << endl;
        }
        
    }
    

    return 0;
}