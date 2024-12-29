// Online Store Using Stl (Strandard Template Library)

#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <set>
#include <map>
#include <string>
#include <ctime>
#include <unordered_map>
#include <unordered_set>

using namespace std;

struct Product {
   int productID;
   string name;
   string category;
};

struct Order {
   int orderID;
   int productID;
   int quantity;
   string customerID;
   time_t orderDate;
};


int main() {

    //1. Products

    vector<Product> products = {
        {101, "Laptop", "Electronics"},
        {102, "SmartPhone", "Electronics"},
        {103, "Coffe Maker", "Kitchen"},
        {104, "Blender", "Kitchen"},
        {105, "Desk Lamp", "Home"}
    };

    cout << "Products:\n";
    for (const auto &product : products) {
        cout << "ID: " << product.productID << ", Name: " << product.name 
             << ", Category: " << product.category << '\n';
    }


    // 2. Recent Customers
    
    deque<string> recentCustomers = {"C001", "C002", "C003"}; 
    recentCustomers.push_back("C004");
    recentCustomers.push_front("C005");

    cout << "\nRecent Customers:\n";
    for (const auto &customer : recentCustomers) {
        cout << customer << '\n';
    }


    // 3. Order History

    list<Order> orderHistory;
    orderHistory.push_back({1, 101, 1, "C001", time(0)});
    orderHistory.push_back({2, 102, 2, "C002", time(0)});
    orderHistory.push_back({3, 103, 1, "C003", time(0)});

    cout << "\nOrder History:\n";
    for (const auto &order : orderHistory) {
        cout << "OrderID: " << order.orderID << ", ProductID: " << order.productID
             << ", Quantity: " << order.quantity << ", CustomerID: " << order.customerID
             << ", Date: " << ctime(&order.orderDate);
    }

    // 4. Categories

    set<string> categories;
    for (const auto &product: products){
        categories.insert(product.category);
    }

    cout << "\nCategories:\n";
    for (const auto &category : categories) {
        cout << category << '\n';
    }


    // 5. Product Stock

    map<int, int> productStock = {
        {101, 10},
        {102, 20},
        {103, 15},
        {104, 5},
        {105, 7}
    };

    cout << "\nProduct Stock:\n";
    for (const auto &stock : productStock) {
        cout << "ProductID: " << stock.first << ", Stock: " << stock.second << '\n';
    }



    // 6. Customer Orders

    multimap<string, Order> customerOrders;
    for (const auto &order: orderHistory) {
       customerOrders.insert({order.customerID, order});
    }

cout << "\nCustomer Orders:\n";
    for (const auto &order: orderHistory) {
        cout << "CustomerID: " << order.customerID << ", OrderID: " << order.orderID 
             << ", ProductID: " << order.productID << '\n';
    }


    // 7. Customer Data

    unordered_map<string, string> customerData = {
        {"C001", "Alice"},
        {"C002", "Divyanshu"},
        {"C003", "Aditya"},
        {"C004", "Karan"},
        {"C005", "Harry"},        
    };
    

    cout << "\nCustomer Data:\n";
    for (const auto &entry : customerData) {
        cout << "CustomerID: " << entry.first << ", Name: " << entry.second << '\n';
    }


    // 8. Unique Product IDs

    unordered_set<int> uniqueProductIDs;
    for (const auto &product: products){
        uniqueProductIDs.insert(product.productID);
    };

    cout << "\nUnique Product IDs:\n";
    for (const auto &productID : uniqueProductIDs) {
        cout << productID << '\n';
    }

   
    return 0;
}