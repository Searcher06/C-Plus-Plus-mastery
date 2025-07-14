#include <iostream>

using namespace std;

// Break = break out of a loop
// continue = skip current iteration
int main()
{
    for(int i =  1; i <= 20;i++){
        if(i % 2 == 0){
            continue;
        }
        cout << i << "\n";
    }
    return 0;
}