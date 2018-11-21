#include <iostream>
#include <cmath>

int main() {
    int a=25, b;
    b=sqrt(a);
    if(b=4){
        std::cout   <<  a   <<  " " <<  b;
    } else{
        b=b*b;
        std::cout   <<  a   <<  " " <<  b;
    }

    /*int day=0;
    while(++day){
        std::cout<< day <<  std::endl;
        day=day%7;
    }*/
    return 0;
}