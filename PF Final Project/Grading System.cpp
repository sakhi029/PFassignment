#include <iostream>
#include <vector>
using namespace std;

// ---------- STRUCT ----------
struct Student {
    int rollNo;
    string name;
    int marks[5];        // Array
    int total;
    int sum;
    float average;
    char grade;
};

// ---------- FUNCTION OVERLOADING ----------
int calculateTotal(int marks[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++)
        sum += marks[i];
    return sum;
}

float calculateTotal(int &sum, int &total) {
    return (sum*100) / total;
}

// ---------- CALL BY REFERENCE ----------
void calculateGrade(Student &s) {
    if (s.average >= 90)
        s.grade = 'A';
    else if (s.average >= 75)
        s.grade = 'B';
    else if (s.average >= 60)
        s.grade = 'C';
    else if (s.average >= 50)
        s.grade = 'D';
    else
        s.grade = 'F';
}

// ---------- DISPLAY FUNCTION ----------
void displayStudent(Student s) {   // Call by Value
    cout << "-------------------------------";
    cout << "\nRoll No: " << s.rollNo;
    cout << "\nName: " << s.name;
    cout << "\nTotal Marks: " << s.total;
    cout << "\nObtained Marks: " << s.sum;
    cout << "\nPercentage: " << s.average <<"%";
    cout << "\nGrade: " << s.grade << endl;
    cout << "-------------------------------" <<endl;
}

// ---------- MAIN ----------
int main() {
    vector<Student> students;  // Vector
    int choice;

    while (true) {   // While Loop
        cout << "\n--- Student Grading System ---\n";
        cout << "1. Add Student\n";
        cout << "2. Display All Students\n";
        cout << "3. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {   // Switch Case
            case 1: {
                Student s;

                cout << "Enter Roll Number: ";
                cin >> s.rollNo;

                cout << "Enter Name: ";
                cin >> s.name;

                for (int i = 0; i < 5; i++) {
                    cout << "Enter marks of subject: " << i+1 << endl;         // For Loop
                    cin >> s.marks[i];
                }
                
                cout << "Enter Total Marks: ";
                cin >> s.total;

                s.sum = calculateTotal(s.marks, 5);        // Call by Value
                s.average = calculateTotal(s.sum, s.total);      // Overloaded function
                calculateGrade(s);                            // Call by Reference

                students.push_back(s);
                cout << "Student added successfully!\n";
                break;
            }

            case 2:
                for (size_t i = 0; i < students.size(); i++) {
                    displayStudent(students[i]);
                }
                break;

            case 3:
                cout << "Exiting program...\n";
                return 0;

            default:
                cout << "Invalid choice!\n";
        }
    }
}