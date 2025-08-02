#include <iostream>
using namespace std;

class Human
{
public:
    string name;
    string occupation;
    int age;

    void eat(string food)
    {
        cout << "This person is eating " << food << "\n";
    }
    void drink()
    {
        cout << "This person is drinking \n";
    }
    void sleep()
    {
        cout << "This person is sleeping \n";
    }
};

int main()
{
    // Objects = A collection of attributes and methods
    // They can have characteristics and could perform actions
    // Can be used to mimic real world items (ex. Phone, Book, Dog)
    // Created from a class which acts as a "blue-print"

    Human human1;
    human1.name = "Ahmad";
    human1.occupation = "Web Developer";
    human1.age = 18;

    cout << human1.name << "\n";
    cout << human1.occupation << "\n";
    cout << human1.age << "\n";

    human1.eat("Pizza");
    return 0;
}
