#include<iostream>
#include<string>
using namespace std;
class Student{
    public:
    string name;
    string age;
    string course;

    void Display(){
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Course: " << course << endl;
    }

};
int main(){
    Student s1;
    s1.name = "riya";
    s1.age = "19";
    s1.course= "btech";

    s1.Display();
    
    return 0;
}