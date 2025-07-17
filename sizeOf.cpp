#include <iostream>

using namespace std;

int main()
{
    // sizeof() = determines the size in bytes of a :
    //          variable, data type, or object.

    double gpa = 5.00;
    char grade = 'a';
    string students[] = {"Ahmad","Mehmet","Salahuddin","Alexander the great"};
    cout << sizeof(gpa) << " bytes\n";
    cout << sizeof(grade) << " bytes\n";
    cout << sizeof(students) / sizeof(string) << " elements \n";
    return 0;
}