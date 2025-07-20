#include <iostream>
using namespace std;

// The const parameter
void printInfo(const string &name, const int &age);
int main()
{
    string name = "Ahmad";
    int age = 18;

    printInfo(name, age);
    return 0;
}
void printInfo(const string &name, const int &age)
{

    cout << name << "\n";
    cout << age << "\n";
}

/*
const paramter = parameter that is effectively read-only
                code is more secure and conveys intent
                useful for references and pointers
*/