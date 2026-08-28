#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    string name;
    int age;
    string course;

    // Constructor parametrized without using pointer 
    Student(string n, int a, string c) {
        name = n;
        age = a;
        course = c;
    }

    void Display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Course: " << course << endl;
    }
};

int main() {
    Student s1("priyanshu", 20, "Btech-CSE");

    s1.Display();

    return 0;
}
