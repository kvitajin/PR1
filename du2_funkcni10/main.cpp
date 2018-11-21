#include <iostream>
#include <cstring>
#include <cmath>
char ch;
int flag=0, num=0, rh=0;
std::string a, b;
int lA, lB, ltmp;

void read(){
    while (true){
        std::cin.get(ch);

        if (std::cin.fail()){
            flag=1;
            break;
        }
        if(ch=='\n' || ch=='\t' || ch==' '){
            break;
        }
        if  (ch!='1' && ch!='0'){
            flag=1;
            break;
        }
        if (rh==0){
            a+=(ch);
        }
        else {
            b+=(ch);
        }
    }

}
/*void eraseWS(){
    while(true){
        std::cin.get(ch);
        if (ch=='\n' || ch=='\t' || ch==' ')   {
            continue;
        }
        if (std::cin.fail()){
            flag=1;
            break;
        }
        if  (ch!='1' && ch!='0'){
            flag=1;
            break;
        }
        b+=ch;
        break;
    }
}*/

int main() {
    std::cout   <<  "Zadejte dve binarni cisla:"    <<  std::endl;

    read();
    ++rh;
    //eraseWS();

    read();
    if (flag!=0){
        std::cout   <<  "Nespravny vstup."    <<  std::endl;
        return 1;
    }
    lA=(int)a.length();
    lB=(int)b.length();
    if (lA>lB){
        ltmp=lA-lB;
        for (int i = 0; i < ltmp; ++i) {
            b='0'+b;
            //std::cout   <<  b  <<  std::endl;
        }
    }
    else if (lA<lB){
        ltmp=lB-lA;
        for (int i = 0; i < ltmp; ++i) {
            a='0'+a;
            //std::cout   <<  a  <<  std::endl;
        }
    }
    else{}
    lA=(int)a.length();
    lB=(int)b.length();
    if (lA!= lB){
        std::cout   <<  a  <<  std::endl;
        std::cout   <<  b   <<  std::endl;
        std::cout   <<  "you dick, posral jsi to"   <<  std::endl;
    }

    std::string vysledek (lA+1, 0);



    for (int j = lA; j >=0; --j) {
        if (a[j]=='1' && b[j]=='1' && num==1){
            vysledek[j+1]='1';
            num=1;
        }
        else if ((a[j]=='1' && b[j]=='1' && num==0) ||
                 (a[j]=='1' && b[j]=='0' && num==1) ||
                 (a[j]=='0' && b[j]=='1' && num==1)){
            vysledek[j+1]='0';
            num=1;
        }
        else if ((a[j]=='1' && b[j]=='0' && num==0) ||
                 (a[j]=='0' && b[j]=='1' && num==0) ||
                 (a[j]=='0' && b[j]=='0' && num==1)){
            vysledek[j+1]='1';
            num=0;
        }
        else if (a[j]=='0' && b[j]=='0' && num==0) {
            vysledek[j+1] = '0';
        }
    }
    vysledek[0]=(char)num+'0';
    flag=0;

    std::cout   <<  "Soucet: ";
    for (int k = 0; k < lA+1; ++k) {
        if (vysledek[k]=='0' && flag==0){
            continue;
        }
        std::cout   <<  (vysledek[k]);
        flag=1;
    }
    if (flag==0){
        std::cout   <<  '0';
    }
    std::cout   <<  std::endl;




    return 0;
}