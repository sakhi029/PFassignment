#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Employee {
    string name;
    int age;
    vector<string> skills;
};

int main() {
    int numEmployees;
    cout << "Enter the number of employees: ";
    cin >> numEmployees;
    vector<Employee> staff;

    for (int i = 0; i < numEmployees; i++) {
        Employee temp;
        cout << "Enter details for Employee " << i + 1 << ":" << endl;
        
        cout << "Name: ";
        cin.ignore();
        getline(cin, temp.name);
        
        cout << "Age: ";
        cin >> temp.age;

        int skillCount;
        cout << "How many skills does this employee have? ";
        cin >> skillCount;
        cin.ignore();

        for (int j = 0; j < skillCount; j++) {
            string skill;
            cout << "Enter skill " << j + 1 << ": ";
            getline(cin, skill);
            temp.skills.push_back(skill);
        }

        staff.push_back(temp);
    }

    cout << "--- EMPLOYEE DIRECTORY ---" << endl;
    for (const auto& emp : staff) {
        cout << "Name: " << emp.name << " | Age: " << emp.age << endl;
        cout << "Skills: ";
        for (size_t i = 0; i < emp.skills.size(); i++) {
            cout << emp.skills[i] << (i == emp.skills.size() - 1 ? "" : ", ");
        }
        cout << "--------------------------" << endl;
    }

    return 0;
}