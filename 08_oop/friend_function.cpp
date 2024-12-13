// Friend Keyword (function)

#include <iostream>
#include <vector>

using namespace  std;

class Chai {
    private:
        string teaname;
        int servings;

        public:
            Chai(string name, int serve): teaname(name), servings(serve){};

            // friend function

            friend bool compareServings(const Chai &Chai1, const Chai &chai2);

            void display() const {
                cout << "Teaname: " << teaname << endl;
                cout << "Servings : " << servings << endl;
            }
};

bool compareServings(const Chai &chai1, const Chai &chai2){
    return chai1.servings > chai2.servings;
}

int main() {

    Chai masalaChai("Masala Chai", 4);
    Chai gingerChai("Ginger Chai", 2);

    masalaChai.display();
    gingerChai.display();

    if (compareServings(masalaChai, gingerChai)){
        cout << "Masala Chai is having more servings "  << endl;
    } else {
        cout << "Ginger Chai is having more servings "  << endl;
    }
    

    return 0;
}