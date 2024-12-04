// Logical Operators

#include <iostream>

using namespace std;

int main() {

    bool isStudent;
    cout << "Are You a student(1 for yes and 0 for No) ?";
    cin >> isStudent;

    int teaCups;
    cout << "How Many cups of tea have you buy ?";
    cin >> teaCups;

    // check condition give discount if is student or have 15 cups of a tea;
    
    if (isStudent || teaCups > 15) {
        cout << "You are elegible for a discount " <<endl;
    }else {
        cout << "You are Not elegible for a discount " <<endl;
    }

    return 0;
}