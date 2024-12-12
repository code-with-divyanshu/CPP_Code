// default constructor 

#include <iostream>
#include <vector>

using namespace  std;

class Chai {
    public:
    string teaName;
    int servings;
    vector<string> ingredients;

    // default constructor
    // special type of method name same as class name it's called automatically after building object
    
    Chai(){
        teaName = "Unknow Tea";
        servings = 1;
        ingredients = {"water", "Tea Leaves", "Sugar"};
        cout << "Constructor Called " << endl;
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

    Chai defaultChai;
    defaultChai.displayChaiDetails();

    return 0;
}