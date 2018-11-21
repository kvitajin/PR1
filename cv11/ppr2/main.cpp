#include <iostream>

int main() {
    struct Pacient{
        std::string prijemni;
        std::string jmeno;
        long int    rc;
        std::string nemoc;
        int         pojistovna;
    };
    const int N=5;
    Pacient pacient[N];
    for (auto &i : pacient) {
        std::cout   <<  "Zadejte prijmeni, jmeno, rodne cislo, nemoc a zdravotni pojistovnu pacienta:"  <<  std::endl;
        std::cin    >> i.prijemni
                    >> i.jmeno
                    >> i.rc
                    >> i.nemoc
                    >> i.pojistovna;
    }
    for (auto &j : pacient) {
        if (j.nemoc=="tbc"){
            std::cout   <<  "Jmeno a prijmeni pacienta s tbc:"  <<  std::endl
                        << j.jmeno
                        <<  " "
                        << j.prijemni
                        <<  std::endl;
        }
        if (j.pojistovna==211){
            std::cout   <<  "Jmeno a prijmeni pacientu s pojistovnou 211 je:"  <<  std::endl
                        << j.jmeno
                        <<  " "
                        << j.prijemni
                        <<  std::endl;
        }
    }
    std::cout   <<  "Prijmeni vsech pacientu jsou:" <<  std::endl;
    for (int k = 0; k < N; ++k) {
        std::cout   <<  pacient[k].prijemni     <<  std::endl;
    }




    return 0;
}