#include <iostream>
int fak(int fak){
    int faktorial=1;
    for (int i = fak; i >1 ; --i) {
        faktorial*=i;
    }
    return faktorial;
}

int main() {

    int n, k, vysledek;
    std::cout << "Zadejte n a k:" << std::endl;
    std::cin    >>  n   >>  k;
    if (std::cin.fail()){
        std::cout   <<  "Nespravny vstup."  <<  std::endl;
        return 1;
    }
    if (n<k){
        std::cout   <<  "Nespravny vstup."  <<  std::endl;
        return 1;
    }
    if (n<0 || k<0){
        std::cout   <<  "Nespravny vstup."  <<  std::endl;
        return 1;
    }
    vysledek=fak(n)/(fak(n-k)*fak(k));
    std::cout <<    "C = " <<  vysledek    <<  std::endl;

    return 0;
}