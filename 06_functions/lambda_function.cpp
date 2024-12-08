// lambda function

#include <iostream>

using namespace  std;

int main() {

    // [](int lines){
    //     cout << "Program " << lines << " lines of codes";
    // }(500);

    auto prepared = [](int lines){
        cout << "Program " << lines << " lines of codes";
    };

    prepared(500);

    return 0;
}