#include <iostream>
#include <cmath>

int jePrvocislo(int &i){
    double j=sqrt(i);
    auto a=(int)j;
    if (i<2){
        return 1;
    }
    for (int k = 2; k < a+1; ++k) {
        if (i%k==0){
            return 2;
        }
    }
    return 0;
}

void najdiPrvocisla(int c1, int c2) {
    for (int i = c1; i <= c2; ++i) {
        if (jePrvocislo(i) == 0) {
            std::cout << i << std::endl;
        }
    }
}

int main() {
    int c1, c2;
    std::cout << "Zadejte interval:" << std::endl;
    std::cin   >>  c1  >>  c2;
    if (std::cin.fail() || c1>c2){
        std::cout   <<  "Nespravny vstup."  <<  std::endl;
        return 1;
    }
    najdiPrvocisla(c1, c2);

    

    return 0;
}