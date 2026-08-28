#include <iostream>
#include <string>
using namespace std;

class Employee {
public:
    string name;
    int id;
    double salary;

    // Constructor parametrized without using pointer 
    Employee(string n, int i, double s) {
        name = n;
        id = i;
        salary = s;
    }

    void Display() {
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
        cout << "Salaru: " << salary << endl;
    }
};

int main() {
    Employee e1("RAM", 124589, 45000);

    e1.Display();

    return 0;
}