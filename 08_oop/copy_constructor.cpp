// copy constructor 

#include <iostream>
#include <vector>

using namespace  std;

class Chai {
    public:
    string* teaName;
    int servings;
    vector<string> ingredients;

    // parameter constructor
    // same but we can pass value through parameters
    
    Chai(string name, int serve, vector<string> ingr){
        teaName = new string(name);
        servings = serve;
        ingredients = ingr;
        cout << "Parameter Constructor Called " << endl;
    }

    // copy constructor

    Chai(const Chai& other){
        teaName = new string(*other.teaName);
        servings = other.servings;
        ingredients = other.ingredients;
        cout << "Copy Constructor Called " << endl;
    }

    // destructor

    ~Chai(){
        delete teaName;
        cout << "Destructor Called " << endl;
    }

    void displayChaiDetails(){
        cout << "Tea Name: " << *teaName << endl;
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
    // lemonTea.displayChaiDetails();

    // copy the lemonTea object

    Chai copiedChai = lemonTea;
    // copiedChai.displayChaiDetails();

    // Modify first object values

    *lemonTea.teaName = "Masala Tea";
    cout << "Masala Tea" << endl;
    lemonTea.displayChaiDetails();

    // check copied tea after first object modification 

    cout << "Copied Lemon Tea" << endl;
    copiedChai.displayChaiDetails();

    return 0;
}