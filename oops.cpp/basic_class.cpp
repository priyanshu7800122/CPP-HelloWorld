#include<iostream>
#include<string>
using namespace std;
class Student{
    public:
    string name;
    string age;
    string course;

};
int main(){
    Student s1;
    s1.name = "riya";
    s1.age = "19";
    s1.course= "btech";
    cout<<s1.name<<endl;
    cout<<s1.age<< endl;
    cout<<s1.course<<endl;
    return 0;
}