#include <iostream>
using namespace std;

// Base class 1
class Student {
protected:
    string name;
    int rollNo;

public:
    void getStudentDetails() {
        cout << "Enter student name: ";
        cin >> name;
        cout << "Enter roll number: ";
        cin >> rollNo;
    }

    void displayStudentDetails() {
        cout << "Name: " << name << "\nRoll No: " << rollNo << endl;
    }
};

// Base class 2
class Marks {
protected:
    int math, science;

public:
    void getMarks() {
        cout << "Enter Math marks: ";
        cin >> math;
        cout << "Enter Science marks: ";
        cin >> science;
    }

    void displayMarks() {
        cout << "Math: " << math << "\nScience: " << science << endl;
    }
};

// Derived class
class Result : public Student, public Marks {
public:
    void displayResult() {
        int total = math + science;
        displayStudentDetails();
        displayMarks();
        cout << "Total Marks: " << total << endl;
    }
};

int main() {
    Result r;
    r.getStudentDetails();
    r.getMarks();
    cout << "\n--- Result ---\n";
    r.displayResult();

    return 0;
}

