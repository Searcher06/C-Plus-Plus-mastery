#include <iostream>

// namespace 03

namespace first{
    int x = 1;
}

namespace second{
    int x = 2;
}

int main(){
    int x = 0;

    std::cout << second::x;
    /*
    Namespace provides a solutionfor preventing name conflicts
    */

    return 0;
}