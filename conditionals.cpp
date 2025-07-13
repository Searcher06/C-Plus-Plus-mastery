#include <iostream>

using namespace std;


int main()
{
    int age;
    cout << "Enter your age : ";
    cin >> age;

    if(age >= 18){
        cout << "Welcome to the site !";
    }else{
        cout << "Not allowed!";
    }

    return 0;
}