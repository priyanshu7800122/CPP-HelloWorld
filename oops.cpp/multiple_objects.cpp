#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    string name;
    string age;
    string course;
};

int main() {
    Student s1;
    Student s2;
    Student s3;

    s1.name = "riya";
    s1.age = "19";
    s1.course = "btech";

    s2.name = "pragya";
    s2.age = "20";
    s2.course = "biotech";

    s3.name = "megha";
    s3.age = "20";
    s3.course = "btech-IBM";

    cout << s1.name << endl;
    cout << s1.age << endl;
    cout << s1.course << endl;

    cout << s2.name << endl;
    cout << s2.age << endl;
    cout << s2.course << endl;

    cout << s3.name << endl;
    cout << s3.age << endl;
    cout << s3.course << endl;

    return 0;
}
