// Getter and Setter in CPP

#include <iostream>
#include <vector>

using namespace  std;

class Chai {
    private:
    string teaName;
    int servings;
    vector<string> ingredients;

   
    public:   

    Chai(){
        teaName = "Unknown tea";
        servings = 1;
        ingredients = {"Water", "Tea Leaves"};
    }



    Chai(string name, int serve, vector<string> ingr){
        teaName = name;
        servings = serve;
        ingredients = ingr;
    }

    //getter
    string getTeaName(){
        return teaName;
    }

    
    // setter
    void setTeaName(string name){
        // you can write any logic and operations
        teaName = name;
    }


    // getter and setter for servings

    //getter
    int getServings(){
        return servings;
    }

    
    // setter
    void setServings(int serve){
        // you can write any logic and operations
        servings = serve;
    }


    // getter and setter for ingredients

    //getter
    vector<string> getIngredients(){
        return ingredients;
    }

    
    // setter
    void setIngredients(vector<string> ingr){
        // you can write any logic and operations
        ingredients = ingr;
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

    Chai chai;
    chai.setTeaName("Lemon Tea");
    chai.getTeaName();
    chai.displayChaiDetails();
  
    return 0;
}