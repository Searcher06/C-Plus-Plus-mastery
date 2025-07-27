#include <iostream>
using namespace std;

struct student
{
    string name;
    double gpa;
    bool enrolled;
};

int main()
{
    // Struct : A structure that groups related variable under one name
    // structs can contain many different data types (strings,int,char)
    // variables in a struct are known as "members"
    // members can access with . "class member access operator"

    student student1;
    student1.name = "Ahmad";
    student1.gpa = 4.17;
    student1.enrolled = true;

    student student2;
    student2.name = "Mehmet";
    student2.gpa = 5.00;
    student2.enrolled = true;

    cout << student1.name << '\n';
    cout << student1.gpa << "\n"
         << "\n";

    cout << student2.name << '\n';
    cout << student2.gpa << "\n"
         << "\n";

    return 0;
}
