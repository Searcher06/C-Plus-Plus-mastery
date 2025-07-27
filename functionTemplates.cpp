#include <iostream>
using namespace std;
template <typename T, typename U>
auto maximum(T x, U y)
{
    return (x > y) ? x : y;
}
// Function template describes what a function looks like.
// can be used to generate as many overloaded function as
// needed, each using different data types

int main()
{
    cout << maximum(1, 3.5) << '\n';
    return 0;
}
