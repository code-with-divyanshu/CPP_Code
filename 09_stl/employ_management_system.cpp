// Employee Management System Using Stl (Strandard Template Library)

#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <iterator>
#include <string>

using namespace std;

struct Employee {
    int id;
    string name;
    double salary;
};

void displayEmployee(const Employee& emp) {
    cout << "ID: " << emp.id << ", Name: " << emp.name << " , Salary: $" << emp.salary << endl;
 }


 int main(){

    

    return 0;
 }