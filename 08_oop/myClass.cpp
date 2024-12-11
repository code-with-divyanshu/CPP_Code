//  classes or object

#include <iostream>
#include <vector>

using namespace  std;

class Chai{
    
    public:
        // data members (attributes)
        string teaName; // name of the tea
        int servings; // numbers of servings
        vector<string> ingredients; // list of ingredients for the tea

        // member function

        void displayChaiDetails(){
            cout << "Tea Name: " << teaName << endl;
            cout << "Servings: " << servings << endl;
            cout << "Ingredients: " ;
            for(string ingredient: ingredients){
                cout << ingredient << ", ";
            }
            cout << endl;
        }
};




int main() {

//  first object

    Chai chaiOne;

    chaiOne.teaName = "Lemon tea";
    chaiOne.servings = 3;
    chaiOne.ingredients = {"Water", "Lemon", "Sugar", "Lemon tealeaves"};
    chaiOne.displayChaiDetails();

//  second object

    Chai chaiTwo;

    chaiTwo.teaName = "Masala tea";
    chaiTwo.servings = 23;
    chaiTwo.ingredients = {"Water", "Milk", "Masala", "Sugar", "tealeaves"};
    chaiTwo.displayChaiDetails();

    return 0;
}                                         