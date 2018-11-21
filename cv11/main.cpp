#include <iostream>

int main() {
    struct Kniha{
        std::string jmenoKnihy;
        std::string prijmeniAutora;
        std::string jmenoAutora;
        std::string zanr;
        int         rokVydani;
        int         cena;
        int         id;
    };
    const int N=5;
    Kniha kniha[N];
    for (auto &i : kniha) {
        std::cout   <<  "Zadej nazev knihy, prijmeni autora, jmeno autora, zanr knihy, rok vydani, cenu a id:"  <<  std::endl;
        std::cin    >> i.jmenoKnihy
                    >> i.prijmeniAutora
                    >> i.jmenoAutora
                    >> i.zanr
                    >> i.rokVydani
                    >> i.cena
                    >> i.id;
    }
    std::cout   <<  "Romany jsou:"  <<  std::endl;
    for (auto &j : kniha) {
        if (j.zanr=="roman"){
            std::cout   << j.jmenoKnihy <<  std::endl;
        }
    }
    std::cout   <<  std::endl;
    std::cout   <<  "Knihy s cenou mensi nez 300,- Kc jsou:"  <<  std::endl;
    for (auto &k : kniha) {
        if (k.cena<300){
            std::cout   << k.jmenoKnihy <<  std::endl;
        }
    }
    std::cout   <<  std::endl;
    std::cout   <<  "Prijmeni vsech autoru jsou:"  <<  std::endl;
    for (auto &l : kniha) {
        std::cout   << l.prijmeniAutora <<  std::endl;
    }


    return 0;
}