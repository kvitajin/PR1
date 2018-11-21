#ifndef __PROGTEST__
#include <iostream>
#include <cstdlib>
#endif /* __PROGTEST__ */

#include <fstream>
#include <vector>
#include <string>

int saveMerde(std::vector<int> &merdeStore, std::string merde){
    int tmp, flag=0;
    for (int i = 0; i < (int)merde.length(); ++i) {
        if ((merde[i]>='0' && merde[i]<='9') || merde[i]=='-'){
        } else{
            ++flag;
            return flag;
        }
    }
    tmp=atoi(merde.c_str());
    //std::cout   <<  merde <<" ";
    merdeStore.push_back(tmp);
    return flag;
}

int evenOdd ( const char * srcFileName, const char * dstFileName )
{
    std::vector<int> merdeStore;
    std::ifstream ifs;
    std::string merde;
    int tmp;
    ifs.open(srcFileName);
    if(ifs){
        while (!ifs.eof()) {
            std::getline(ifs, merde);
            tmp=saveMerde(merdeStore, merde);
            if (tmp)break;
        }
        ifs.close();
    }else{
        return 0;
    }
    //std::cout <<std::endl<<tmp<<std::endl;
    if (tmp){
        return 0;
    }
    for (int i : merdeStore) {
        std::cout   << i <<  " ";
    }
    std::ofstream ofs;
    std::string save;
    ofs.open(dstFileName);
    for (int j = 0; j < (int)merdeStore.size()-1; ++j) {
                if (merdeStore[j] % 2 == 0) {
            save +=std::to_string(merdeStore[j]);
            save += "\n";
        }
    }

    for (int i : merdeStore) {
        if (i % 2 == 1 || i % 2 == -1) {
            save += std::to_string(i);
            save += "\n";
        }
    }
    std::cout   <<  save;
    if (ofs){
        ofs <<  save;
        ofs.close();
    } else return 0;
    return 1;
}

#ifndef __PROGTEST__
int main ( int argc, char * argv [] )
{
    evenOdd("i.txt", "merde.txt");
    std::cout   <<  std::endl   <<  std::endl;
    evenOdd("in.txt", "merde1.txt");
    std::cout   <<  std::endl   <<  std::endl;
    evenOdd("in2.txt", "merde2.txt");

    return 0;
}
#endif /* __PROGTEST__ */