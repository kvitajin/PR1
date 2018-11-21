#include <iostream>
#include <cmath>

int main() {
    int navstevnici;
    double tmp;

    std::cout   <<  "Zadej pocet navstevniku:"  <<  std::endl;
    std::cin    >>  navstevnici;
    if (std::cin.fail() || navstevnici<0){
        std::cout   <<  "Nespravny vstup."  <<  std::endl;
        return 1;
    }
    tmp=navstevnici*0.07;
    tmp=floor (tmp);
    tmp*=50;

    if (tmp>=0 && tmp<=1950){
        navstevnici=70;
    }
    else if (tmp>=2000 && tmp<=2450){
        navstevnici=80;
    }
    else if (tmp>=2500 && tmp<=2950){
        navstevnici=90;
    }
    else if (tmp>=3000 && tmp<=3450){
        navstevnici=100;
    }
    else if (tmp>=3500){
        navstevnici=110;
    }
    else {
        std::cout   <<  tmp;
        return 1;
    }
    navstevnici*=8;
    std::cout   <<  "Brigadnik vydela: "    <<  navstevnici <<  " Kc"   <<std::endl;

    return 0;
}