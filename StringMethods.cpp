#include <iostream>

using namespace std;

int main()
{
    string name;
    cout << "Enter your name: ";
    cin >> name;

    name.append("@gmail.com");
    cout << "Your email is now " << name;
    return 0;
}

// name.length() returns the length of a string;
// name.empty() returns a boolean whether a string is empty or not
// name.clear() it clears the value of a string
// name.append() appends string to another string
// name.at(0) getting a character by its position
// name.insert(index,'string value') inserting a string at a particular position
// name.find('') used to find specified character in a string and return it's index
