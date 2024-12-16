// Abstraction // pillar of oop
// breaking down complex systems into manageable and reusable components

#include <iostream>
#include <string>

using namespace std;


// its abstract class // if one or more virtual function

class Tea {
    public:
        virtual void prepareIngredients() = 0; // pure virtual function
        virtual void brew() = 0; // pure virtual function
        virtual void serve() = 0; // pure virtual function

        void makeTea(){
            prepareIngredients();
            brew();
            serve();
        }
};


// derived class 

class GreenTea: public Tea {
    public:
    void prepareIngredients() override {
        cout << "Green Leaves and Water is ready" << endl;
    }

      void brew() override {
        cout << "Green Tea Brewed" << endl;
    }

      void serve() override {
        cout << "Green Tea Served" << endl;
    }
};


class MasalaTea: public Tea {
    public:
    void prepareIngredients() override {
        cout << "Tea Leaves and Water along with masala is ready" << endl;
    }

      void brew() override {
        cout << "Masala Tea Brewed" << endl;
    }

      void serve() override {
        cout << "Masala Tea Served" << endl;
    }
};

int main(){

   GreenTea greenTea;
   MasalaTea masalaTea;

   greenTea.makeTea();
   masalaTea.makeTea();


    return 0;
}
