#include <iostream>

using namespace std;

void happyBirthday(string name);

int main()
{
    string name = "Ahmad";
    happyBirthday(name);

    return 0;
}

void happyBirthday(string name){
    cout << "Happy birthday to " << name << endl;
    cout << "Happy birthday to " << name << endl;
    cout << "Happy birthday to " << name << endl;
}