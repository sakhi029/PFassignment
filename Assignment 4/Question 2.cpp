#include <iostream>
#include <vector>
#include <fstream>
#include <string>

using namespace std;

struct Order {
    int orderID;
    string customerName;
    int itemsCount;
    double pricePerItem;
};

int main() {

    vector<Order> orders;
    int numOrders;

    cout << "Enter total number of orders: ";
    cin >> numOrders;

    for (int i = 0; i < numOrders; i++) {
        Order ord;
        cout << "\nEnter details for Order " << i + 1 << ":" << endl;
        cout << "Order ID: ";
        cin >> ord.orderID;
        cout << "Customer Name: ";
        cin >> ord.customerName;

        do {
            cout << "Number of Items (must be positive): ";
            cin >> ord.itemsCount;
            if(ord.itemsCount <= 0) cout << "Invalid input. Try again.\n";
        } while (ord.itemsCount <= 0);

        do {
            cout << "Price per Item (must be positive): ";
            cin >> ord.pricePerItem;
            if(ord.pricePerItem <= 0) cout << "Invalid input. Try again.\n";
        } while (ord.pricePerItem <= 0);

        orders.push_back(ord);
    }

    ofstream outFile("question2.txt");

    if (!outFile) { 
        cout << "Error creating file!" << endl;
        return 1;
    }

    for (unsigned i = 0; i < orders.size(); i++) {

        double totalBill = orders[i].itemsCount * orders[i].pricePerItem;

        if (totalBill > 5000) {
            outFile << orders[i].orderID << " " 
                    << orders[i].customerName << " " 
                    << totalBill << endl;
        }
    }
    outFile.close();

    cout << "\n--- Priority Orders (Total > 5000) ---" << endl;

    ifstream inFile("question2.txt");

    if (!inFile) {
        cout << "No priority orders found or error reading file." << endl;
    } else {
        int id;
        string name;
        double bill;

        while (inFile >> id >> name >> bill) {
            cout << "Order ID: " << id << ", Customer: " << name 
                 << ", Total Bill: " << bill << endl;
        }
        inFile.close();
    }

    return 0;
}