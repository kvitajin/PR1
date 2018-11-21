#include <iostream>

int main() {
    std::string passwd;
    bool pismeno, spec, cislo, delka;
    pismeno=spec=cislo=delka=false;
    std::getline(std::cin, passwd);
    if (passwd.length()>=5){
        delka= true;
    }

    for (int i = 0; i < (int)passwd.length(); ++i) {
        if (passwd[i]>='0' && passwd[i]<='9'){
            cislo=true;
        }
        else if ((passwd[i]>='A' && passwd[i]<='Z')      ||
                 (passwd[i]>='a' && passwd[i]<='z')){
                pismeno=true;
        }
        else if (!(passwd[i]>='0' && passwd[i]<='9')    &&
                 !(passwd[i]>='A' && passwd[i]<='Z')    &&
                 !(passwd[i]>='a' && passwd[i]<='z')    &&
                  (passwd[i]>=33  && passwd[i]<=126))  {
                spec=true;
        }

    }
    //std::cout   <<pismeno<<"\n"<<cislo<<"\n"<<spec<<"\n"<<delka<<"\n";
    if (pismeno && cislo && spec && delka){
        std::cout <<    "Heslo splnuje pozadavky."  <<std::endl;
    } else{
        std::cout <<    "Heslo nesplnuje pozadavky."  <<std::endl;
    }

    return 0;
}