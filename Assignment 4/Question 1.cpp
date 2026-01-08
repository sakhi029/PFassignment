#include <iostream>
#include <vector>
#include <fstream>  
#include <string>

using namespace std;

struct Employee {
    int id;
    string name;
    double monthlySalary;
};

int main() {
    vector<Employee> employees;
    int numemployees;
    double threshold;

    cout << "Enter the number of Employees: ";
    cin >> numemployees;

    for (int i = 0; i < numemployees; i++) {
        Employee emp;
        cout << "\nEnter details for employee " << i + 1 << ":" << endl;
        cout << "ID: ";
        cin >> emp.id;
        cout << "Name : ";
        cin >> emp.name;
        cout << "Monthly Salary: ";
        cin >> emp.monthlySalary;


        employees.push_back(emp); 
    }


    cout << "Enter the yearly salary threshold to filter: ";
    cin >> threshold;

    ofstream outFile("question1.txt");

    if (!outFile) {
        cout << "Error " << endl;
        return 1;
    }

    cout << endl;
    

    for (unsigned i = 0; i < employees.size(); i++) {

        double yearlySalary = employees[i].monthlySalary * 12;

        cout << "Checking Employee " << employees[i].name << ": Yearly Salary is " << yearlySalary << " vs Threshold " << threshold << endl;
        if (yearlySalary > threshold) {
            cout << "Saved" << endl;
            outFile << employees[i].id << " " 
                    << employees[i].name << " " 
                    << yearlySalary << endl;
        }else {
            cout << "Not Saved" << endl;
        }
    }
    outFile.close();

    cout << endl;

    cout << "--- High Salary Employees (from file) ---" << endl;
    
    ifstream inFile("question1.txt");
    
    if (!inFile) {
        cout << "Error opening file" << endl;
    } else {
        int id;
        string name;
        double ySalary;

        while (inFile >> id >> name >> ySalary) {
            cout << "ID: " << id << ", Name: " << name 
                 << ", Yearly Salary: " << ySalary << endl;
        }
        inFile.close();
    }
    return 0;
}