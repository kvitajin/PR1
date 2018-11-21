#include <iostream>

void konecnyUklid(int *A=NULL, int *B=NULL){
    delete[]A;
    delete[]B;
}

int main() {
    int sizeA, sizeB, tmp;
    std::cout   << "Zadejte pocet prvku mnoziny A:" << std::endl;
    std::cin    >>  sizeA;
    if (std::cin.fail()|| sizeA<1){
        std::cout   << "Nespravny vstup."<< std::endl;
        return 1;
    }
    auto *A=new int[sizeA];
    std::cout   << "Zadejte prvky mnoziny A:" << std::endl;
    for (int i = 0; i < sizeA; ++i) {
        std::cin    >>  tmp;
        if(std::cin.fail()){
            std::cout   <<  "Nespravny vstup."  <<  std::endl;
            konecnyUklid(A);
            return 1;
        }
        for (int j = 0; j < i; ++j) {
            if (tmp==A[j]){
                std::cout   <<  "Nespravny vstup."  <<  std::endl;
                konecnyUklid(A);
                return 1;
            }
        }
        A[i]=tmp;
    }
    std::cout   << "Zadejte pocet prvku mnoziny B:" << std::endl;
    std::cin    >>  sizeB;
    if (std::cin.fail()|| sizeB<1){
        std::cout   << "Nespravny vstup."<< std::endl;
        konecnyUklid(A);
        return 1;
    }
    auto *B=new int[sizeB];
    std::cout   << "Zadejte prvky mnoziny B:" << std::endl;
    for (int i = 0; i < sizeB; ++i) {
        std::cin    >>  tmp;
        if(std::cin.fail()){
            std::cout   <<  "Nespravny vstup."  <<  std::endl;
            konecnyUklid(A,B);
            return 1;
        }
        for (int j = 0; j < i; ++j) {
            if (tmp==B[j]){
                std::cout   <<  "Nespravny vstup."  <<  std::endl;
                konecnyUklid(A,B);
                return 1;
            }
        }
        B[i]=tmp;
    }
    int poc=0;
    std::cout   <<  "Prunik mnozin:"    <<  std::endl;
    std::cout   <<  "{";
    for (int k = 0; k < sizeA; ++k) {
        for (int i = 0; i < sizeB; ++i) {
            if (A[k]==B[i]){
                if (poc>0){
                    std::cout   <<  ", ";
                }
                std::cout   <<  B[i];
                ++poc;
            }
        }
    }
    std::cout   <<  "}" <<  std::endl;
    konecnyUklid(A, B);


    return 0;
}