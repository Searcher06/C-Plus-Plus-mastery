#include <iostream>

using namespace std;

typedef int Money;

int main(){
    Money salary = 30000; // Using typedef to define Money as an alias for int;
    Money netWorth = 150000; // Using typedef to define Money as an alias for int;
    cout << "I earn " << salary << " per year." << endl;
    cout << "My net worth is " << netWorth << "." << endl;
    return 0;
}