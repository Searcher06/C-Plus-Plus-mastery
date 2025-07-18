#include <iostream>
using namespace std;

double getTotal(double prices[], int size);
int main()
{
    double prices[] = {49.99, 115.05, 75, 99.87, 34.5};
    int size = sizeof(prices) / sizeof(double);
    double total = getTotal(prices, size);

    cout << "Total is $" << total;
    return 0;
}
double getTotal(double prices[], int size)
{
    double total = 0;
    for (int i = 0; i < size; i++)
    {
        total = total + prices[i];
    }
    return total;
}
