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

    vector<Employee> employees = {
        {101, "Hitesh", 100000},
        {102, "Saksham", 3000},
        {103, "Shubham", 32345},
        {104, "Karan", 985345},
        {105, "Rahul", 50000},
    };

    // lambda - unnamed functions start with squre bracket

    sort(employees.begin(), employees.end(), [](const Employee& e1, const Employee& e2){
        return e1.salary > e2.salary;
    });

    cout << "Employees Sorted by Salary -> Highest to Lowest \n";
    for_each(employees.begin(), employees.end(), displayEmployee);

    return 0;
 }