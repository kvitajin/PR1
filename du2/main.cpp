#include <iostream>
#include <vector>
#include <cmath>
char ch;
int tmp=0, num=0, flag=0, rh=0 ;
std::vector <int> a, b, vysledek;


int read(){
    while (true){
        std::cin.get(ch);

        if (std::cin.fail() || (ch!='1' && ch!='0')){
            flag=1;
            break;
        }
        if(ch=='\n' || ch=='\t' || ch==' '){
            break;
        }
        num=ch-'0';
        if (rh==0)  a.push_back(num);
        else        b.push_back(num);
    }

}

int main() {

    std::cout   <<  "Zadejte dve binarni cisla:"    <<  std::endl;

    read();
    ++rh;

    if (flag!=0){
        std::cout   <<  "Nespravny vstup."    <<  std::endl;
        return 1;
    }
    read();
    if (a.size()>b.size()){
        int i;
        for (i = 0; i < b.size(); ++i) {
            if (a[a.end()-i]==1 && b[b.end()-i]==1 && tmp==1){
                vysledek[a.size()-i]=1;
                tmp=1;
            }
            else if ((a[a.end()-i]==1 && b[b.end()-i]==1 && tmp==0) ||
                     (a[a.end()-i]==1 && b[b.end()-i]==0 && tmp==1) ||
                     (a[a.end()-i]==0 && b[b.end()-i]==1 && tmp==1)){
                vysledek[a.size()-i]=0;
                tmp=1;
            }
            else if ((a[a.end()-i]==1 && b[b.end()-i]==0 && tmp==0) ||
                     (a[a.end()-i]==0 && b[b.end()-i]==1 && tmp==0) ||
                     (a[a.end()-i]==0 && b[b.end()-i]==0 && tmp==1)){
                vysledek[a.size()-i]=1;
                tmp=0;
            }
            else if (a[a.end()-i]==1 && b[b.end()-i]==0 && tmp==0){
                vysledek[a.size()-i]=0;
            }
        }
        for (;  i< a.size(); ++i) {
            vysledek[a.size()-i]=a[a.size()-i];
        }
    }




    return 0;
}