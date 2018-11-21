#include <iostream>
#include <cmath>
#include <iomanip>

void konecneCisteni(double *A=NULL, double *B=NULL){
    delete[] A;
    delete[] B;
}


int main() {
    int pocet;
    double tmp;

    std::cin >> pocet;
    if (std::cin.fail() || pocet<1){
        std::cout << "Nespravny vstup." << std::endl;
        return 1;
    }
    auto *A=new double[pocet];
    auto *B=new double[pocet];
    for (int i = 0; i < pocet; ++i) {
        std::cin    >>  tmp;
        if (std::cin.fail()){
            std::cout << "Nespravny vstup." << std::endl;
            konecneCisteni(A, B);
            return 1;
        }
        A[i]=tmp;
    }
    for (int j = 0; j < pocet; ++j) {
        std::cin    >>  tmp;
        if (std::cin.fail()){
            std::cout << "Nespravny vstup." << std::endl;
            konecneCisteni(A, B);
            return 1;
        }
        B[j]=tmp;
    }
    double citatel, jmenovatelA, jmenovatelB, wtf;
    citatel=jmenovatelA=jmenovatelB=0;
    for (int k = 0; k < pocet; ++k) {
        citatel     +=  A[k]*B[k];
        jmenovatelA +=  pow(A[k], 2);
        jmenovatelB +=  pow(B[k], 2);
    }
    jmenovatelA=sqrt(jmenovatelA);
    jmenovatelB=sqrt(jmenovatelB);
    wtf=citatel/(jmenovatelA*jmenovatelB);
    std::cout   <<  "CSM: " <<  std::setprecision(3)    <<  wtf <<  std::endl;
    konecneCisteni(A, B);


    return 0;
}