#include <iostream>
#include <cmath>

int main() {
    char a;
    int flag=0, cnt=0, i=0;                        //error flag, cnt pruchodu, dec vzsledek
    int save[100];
    long long unsigned int dec=0;

    std::cout << "Zadej cislo ve dvojkove soustave:" << std::endl;
    std::cin.get(a);

    while(true) {
        //std::cout << a << " ";
        if (std::cin.fail()) {
            flag = 1;
            break;
        }
        if (a == '\n')break;
        if (a != '1' && a != '0') {
            flag = 1;
            break;
        }

        save[cnt] = (a - 48);
        //std::cout << save[cnt] << " ";
        std::cin.get(a);
        ++cnt;
    }



    if (flag!=0 || cnt==0) {
        std::cout << "Nespravny vstup." << std::endl;
        return 1;
    }
    --cnt;
    while (true){
        dec+=pow(2, cnt)*save[i];
        //std::cout << dec <<  " ";
        //++i;
        if (cnt==0)break;
        ++i;
        --cnt;

    }
   // std::cout   <<  std::endl<<  std::endl<<  std::endl;
    std::cout   <<  "Desitkove cislo je: " <<   dec <<  std::endl;

    return 0;
}