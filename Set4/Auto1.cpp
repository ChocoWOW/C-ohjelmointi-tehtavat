#include <iostream>
#include <string>

class Auto
{
    public:
        std::string rekisteritunnus;
        int huippunopeus;
        int nopeysnyt = 0;
        int kuljettu = 0;
        Auto() {
            huippunopeus = 142;
            rekisteritunnus = "ABC-142";
        }
        

};
int main() {
    Auto vroom;
    std::cout<<vroom.huippunopeus << "\n";
    std::cout<<vroom.nopeysnyt << "\n";
    std::cout<<vroom.kuljettu << "\n";
    std::cout<<vroom.rekisteritunnus << "\n";
    
}
