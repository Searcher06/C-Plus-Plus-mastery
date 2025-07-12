#include <iostream>

using namespace std;

int main(){

    string name;
    int age;

    cout << "How old are you ? " << endl;
    cin >> age;

    cout << "What is your fullname ? " << endl;
    // cin >> name;
    // If you are accepting a string that has line space use getline()
    getline(cin >> ws,name); // If you use cin before getline the getline should be like getline(cin >> ws, varibleName)
    cout << name << " is " << age << " years old " << endl;

    return 0;
}