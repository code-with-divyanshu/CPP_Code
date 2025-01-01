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

    // Alogoritms 

    // lambda - unnamed functions start with squre bracket

    // shorting data

    sort(employees.begin(), employees.end(), [](const Employee& e1, const Employee& e2){
        return e1.salary > e2.salary;
    });

    cout << "Employees Sorted by Salary -> Highest to Lowest \n";
    for_each(employees.begin(), employees.end(), displayEmployee);


    vector<Employee> highEarners;

    // check condition

    copy_if(employees.begin(),
            employees.end(),
            back_inserter(highEarners), 
            [](const Employee& emp){
            return emp.salary > 50000;
    });

    cout << "Employees Who are High earners\n";
    for_each(highEarners.begin(), highEarners.end(), displayEmployee);

    // get average salary of employees

    double totalSalary = accumulate(employees.begin(), employees.end(), 0.0, [](double sum, const Employee& emp){
        return sum + emp.salary;
    });

    double averageSalary = totalSalary / employees.size();

    cout << "Employees Average Salary \n";
    cout << averageSalary << endl;

    //  check highest paid employee

    auto highestPaid = max_element(employees.begin(), employees.end(), [](const Employee& emp1, const Employee& emp2){
        return emp1.salary < emp2.salary;
    });

    cout << "Higest Paid Employee\n";
    displayEmployee(*highestPaid);


    return 0;
 }