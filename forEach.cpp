#include <iostream>

using namespace std;

int main()
{
    // forEach loop = loop that eases the traversal over and iterable data set
    int scores[] = {90, 45, 78, 89};
    for(int score : scores){
        cout << score << endl;   
    }
    return 0;
}