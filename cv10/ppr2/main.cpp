#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
    int steps;
    double x, y, fi, delta, v, omega;
    std::cin    >> steps;
    if (steps<0|| std::cin.fail()){
        std::cout   <<  "Nespravny vstup."  <<std::endl;
        return 1;
    }

    std::cin    >>  x   >>  y   >>  fi  >>  delta   >>  v   >>  omega;

    if (std::cin.fail()){
        std::cout   <<  "Nespravny vstup."  <<std::endl;
        return 1;
    }



    for (int i = 0; i < steps; ++i) {

        x=x+v*delta*cos(fi);
        y=y+v*delta*sin(fi);
        fi=fi+delta*omega;
        if (fi>2*M_PI){
            fi=fi-2*M_PI;
        }
        std::cout <<    std::setprecision(2)    <<  std::fixed
                  <<    "x: "  <<  x    <<  ", "
                  <<    "y: "  <<  y    <<  ", "
                  <<    "fi: "  <<  fi
                  << std::endl;
    }

    return 0;
}