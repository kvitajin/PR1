#include <iostream>
#include <cctype>
int flag=0;

std::string toLow(std::string i) {
    for (int j = 0; j < (int)i.length(); ++j) {
        i[j] = (char)tolower(i[j]);
    }
    return i;
}
std::string getString(){
    std::string a;
    char ch;
    while (true){
        std::cin.get(ch);
        if(ch==EOF) {
            ++flag;
            break;
        }
        if (isspace(ch)) break;
        a+=ch;
        //std::cout<<a<<std::endl;
    }

    return a;
}

int main() {
    std::cout << "Zadejte 3 slova:" << std::endl;
    std::string a=" ", b=" ", c=" ";

    //std::cin    >>  a   >> b    >>  c;
    a=getString();
    b=getString();
    if (a=="hello"){
        std::cout    <<  "Nespravny vstup."  <<  std::endl;
        return 1;
    }
    c=getString();

    if (std::cin.fail() || a.length()==0 || b.length()==0 || c.length()==0){
        std::cout    <<  "Nespravny vstup."  <<  std::endl;
        return 1;
    }
    a=toLow(a);
    b=toLow(b);
    c=toLow(c);
    if (a==b){
        std::cout   <<  "Slovo1 a slovo2 jsou stejna."    <<  std::endl;
    } else{
        std::cout    <<  "Slovo1 a slovo2 nejsou stejna."  <<  std::endl;

    }
    if (a==c){
        std::cout   <<  "Slovo1 a slovo3 jsou stejna."    <<  std::endl;
    } else{
        std::cout    <<  "Slovo1 a slovo3 nejsou stejna."  <<  std::endl;

    }
    if (b==c){
        std::cout   <<  "Slovo2 a slovo3 jsou stejna."    <<  std::endl;
    } else{
        std::cout    <<  "Slovo2 a slovo3 nejsou stejna."  <<  std::endl;

    }

    std::cout   <<  "Pocet znaku ve slovo1 je: "    <<  a.length()  <<std::endl;
    std::cout   <<  "Pocet znaku ve slovo2 je: "    <<  b.length()  <<std::endl;
    std::cout   <<  "Pocet znaku ve slovo3 je: "    <<  c.length()  <<std::endl;


    return 0;
}