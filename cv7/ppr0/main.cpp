#include <iostream>

int main() {
    int i=5, tmp=1;

    for (int j = i; j > 0; --j) {
       tmp*=j;
    }

    std::cout << "fucktorial je: " <<   tmp << std::endl;
    return 0;
}