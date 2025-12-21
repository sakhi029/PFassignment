#include <iostream>
#include <vector>
#include <string>

using namespace std;
struct Student {
    string name;
    string id;
};

struct Course {
    string courseName;
    string courseCode;
    vector<Student> enrolledStudents;
};

int main() {
    int numCourses;
    cout << "Enter the number of courses: ";
    cin >> numCourses;

    vector<Course> universityCourses;

    for (int i = 0; i < numCourses; i++) {
        Course c;
        cout << "Enter details for Course " << i + 1 << ":" << endl;
        cout << "Course Name: ";
        cin.ignore();
        getline(cin, c.courseName);
        cout << "Course Code: ";
        getline(cin, c.courseCode);

        int numStudents;
        cout << "Enter number of students to enroll: ";
        cin >> numStudents;

        for (int j = 0; j < numStudents; j++) {
            Student s;
            cout << "  Student " << j + 1 << " Name: ";
            cin.ignore();
            getline(cin, s.name);
            cout << "  Student " << j + 1 << " ID: ";
            getline(cin, s.id);
            c.enrolledStudents.push_back(s);
        }
        universityCourses.push_back(c);
    }

    cout << "--- UNIVERSITY ENROLLMENT REPORT ---" << endl;
    for (const auto& c : universityCourses) {
        cout << "Course: " << c.courseName << " (" << c.courseCode << ")" << endl;
        cout << "Enrolled Students:" << endl;
        if (c.enrolledStudents.empty()) {
            cout << "  No students enrolled." << endl;
        } else {
            for (const auto& s : c.enrolledStudents) {
                cout << "  - " << s.name << " (ID: " << s.id << ")" << endl;
            }
        }
    }

    return 0;
}