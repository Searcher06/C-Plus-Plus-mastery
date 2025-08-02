#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    int age;
    double gpa;

    // Constructor
    Student(string name, int age, double gpa)
    {
        this->name = name;
        this->age = age;
        this->gpa = gpa;
    }
};
int main()
{
    // Constructor = special method that is authomatically called when
    // an object is instantiated
    // useful for assigning values to attributes as arguements

    Student student1("Ahmad", 18, 4.18);
    Student student2("Ibrahim", 48, 2.99);
    cout << student1.name << '\n';
    cout << student1.age << '\n';
    cout << student1.gpa << '\n'
         << endl;

    cout << student2.name << '\n';
    cout << student2.age << '\n';
    cout << student2.gpa << '\n';

    return 0;
}
