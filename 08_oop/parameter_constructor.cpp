// parameter constructor 

#include <iostream>
#include <vector>

using namespace  std;

class Chai {
    public:
    string teaName;
    int servings;
    vector<string> ingredients;

    // parameter constructor
    // same but we can pass value through parameters
    
    Chai(string name, int serve, vector<string> ingr){
        teaName = name;
        servings = serve;
        ingredients = ingr;
        cout << "Parameter Constructor Called " << endl;
    }

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

    Chai lemonTea("Lemon Tea", 2, {"Water", "Lemon", "Honey", "Tea Leaves"});
    lemonTea.displayChaiDetails();

    return 0;
}