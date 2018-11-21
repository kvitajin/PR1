#ifndef PROGTEST
#include <cstdio>
#include <cstdlib>
#include <cctype>
#include <cstring>
#include <iostream>
#include <iomanip>
#include <fstream>
#include <sstream>
#include <string>
#include <cstring>
using namespace std;

#define EASTER_OK                0
#define EASTER_INVALID_FILENAME  1
#define EASTER_INVALID_YEARS     2
#define EASTER_IO_ERROR          3


#endif /* PROGTEST */




int zapis_souboru(string &data, string &file)
{
    int hlp=0;
    int x;
    //cout    <<  data<<  endl;
    //cout    <<  file<<  endl;
    if (file.size()<6)
    {

        return EASTER_INVALID_FILENAME;
    }
    for ( x = 0; x <(int)file.size()-5; ++x)
    {
        if (!cin.fail()              &&
            ((file[x]>='A'&& file[x]<='Z') ||
             (file[x]>='a'&& file[x]<='z') ||
             (file[x]>='0'&& file[x]<='9') ||
             file[x]=='\\'|| file[x]=='/' ||
             file[x]=='.'))
        {}
        else ++hlp;
    }
    if(file[x]!='.' || file[++x]!='h' || file[++x]!='t' || file[++x]!='m' || file[++x]!='l')
    {

        return EASTER_INVALID_FILENAME;
    }
    if (hlp)
    {

        return EASTER_INVALID_FILENAME;
    }
    ofstream op;
    op.open(file.c_str());
    if(op)
    {
        op<<data;
        op.close();
        return EASTER_OK;
    }
    else
    {
        return EASTER_IO_ERROR;
    }
}
int easterReport ( const char * years, const char * outFileName )
{
    string rok=years;

    int delka=(int)rok.length();
    int *ary=new int[delka];
    int tmp=0, low=0, part=0,k=0;
    if (delka<4){
        return EASTER_INVALID_YEARS;
    }
    for (int i=0;i<rok.length();++i)
    {

        if(rok[i]==',' || rok[i]==' ')
        {
            continue;
        }
        /*else if (rok[i]=='-' && rok[i+1]=='-'){
            return
        }*/
        else if(rok[i]=='-')
        {
            for(int j=0; j<4;++j)
            {
                ++i;
                while(rok[i]==' ')++i;
                tmp*=10;
                tmp+=rok[i]-48;
            }
            part=tmp;
            if(part>2200)
            {
                return  EASTER_INVALID_YEARS;
            }
            if(part<low)
            {
                return  EASTER_INVALID_YEARS;
            }
            while(part!=low)
            {
                ++low;
                ary[k]=low;
                k++;
                if(delka==k)
                {
                    size_t newSize = delka +10;
                    int* newAry = new int[newSize];

                    memcpy( newAry, ary, delka * sizeof(int) );

                    delka = newSize;
                    delete [] ary;
                    ary = newAry;
                }

            }
            continue;
        }
        else if(isalpha(rok[i]))
        {
            return EASTER_INVALID_YEARS;
        }
        else if (isdigit(rok[i]))
        {
            tmp*=10;
            tmp+=rok[i]-48;
        }
        if(tmp>1582 && tmp<2200)
        {
            ary[k]=tmp;
            k++;
            low=tmp;
            tmp=0;
            if(delka==k)
            {
                size_t newSize = delka +10;
                int* newAry = new int[newSize];

                memcpy( newAry, ary, delka * sizeof(int) );

                delka = newSize;
                delete [] ary;
                ary = newAry;
            }
        }
        else if(tmp<1582 || tmp>2200)
        {
            if(tmp==1 || tmp==2)
            {
                if(isdigit(rok[i+1]) && isdigit(rok[i+2]) && isdigit(rok[i+3]))
                {
                    continue;
                }
            }
            else if(tmp>=15 && tmp<=22)
            {
                if(isdigit(rok[i+1]) && isdigit(rok[i+2]))
                {
                    continue;
                }
            }
            else if(tmp>=158 && tmp<=220)
            {
                if(isdigit(rok[i+1]))
                {
                    continue;
                }
            }

            return EASTER_INVALID_YEARS;
        }


    }
    /*for (int l = 0; l < k ; ++l)
    {
        cout <<ary[l] <<  " ";

    }*/

    int a, b, c, d, e, f, g, h, i, kk, l, m, n, p;

    string data="<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0 Transitional//EN\">\n"
            "<html>\n"
            "<head>\n"
            "<meta http-equiv=\"Content-Type\" content=\"text/html; charset=utf-8\">\n"
            "<title>C++</title>\n"
            "</head>\n"
            "<body>\n"
            "<table width=\"300\">\n"
            "<tr><th width=\"99\">den</th><th width=\"99\">mesic</th><th width=\"99\">rok</th></tr>\n";

    for (int z = 0; z < k; ++z)
    {
        a= ary[z]%19;
        b= ary[z]/100;
        c= ary[z]%100;
        d= b/4;
        e= b%4;
        f= (b+8)/25;
        g= (b-f+1)/3;
        h= (19*a+b-d-g+15)%30;
        i= c/4;
        kk= c%4;
        l= (32+2*e +2*i-h-kk)%7;
        m= (a+11*h+22*l)/451;
        n= (h+l-7*m+114)/31;
        p= (h+l-7*m+114)%31;

        data+="<tr><td>";
        data+=to_string((p+1));
        if(n==3)
        {
            data+="</td><td>brezen</td><td>";
        }
        else
        {
            data+="</td><td>duben</td><td>";
        }
        data+=to_string(ary[z]);
        data+="</td></tr>\n";
    }
    data+="</table>\n"
            "</body>\n"
            "</html>\n";
    string file=outFileName;
    tmp=zapis_souboru(data, file);

    return tmp;
}



#ifndef PROGTEST
int main ( int argc, char * argv[] )
{
    int tmp=0;

    tmp = easterReport ( "200 0", "out0.html" );
    std::cout << tmp << std::endl;
    std::cout << "-------------------------------------------------------------------------------" << std::endl;
    tmp =  easterReport ( "1590 - 2199", "out1.html" );
    std::cout << tmp << std::endl;
    std::cout << "-------------------------------------------------------------------------------" << std::endl;
    tmp = easterReport ( "2001 , 2002  ,  2003 ,2005,2006", "out2.html" );
    std::cout << tmp << std::endl;
    std::cout << "-------------------------------------------------------------------------------" << std::endl;
    tmp = easterReport ( "2000,2011,2010-2020", "out3.html" );
    std::cout << tmp << std::endl;
    std::cout << "-------------------------------------------------------------------------------" << std::endl;
    tmp = easterReport ( "2000-3000", "out4.html" );
    std::cout << tmp << std::endl;
    std::cout << "-------------------------------------------------------------------------------" << std::endl;

    return 0;
}
#endif /* PROGTEST */