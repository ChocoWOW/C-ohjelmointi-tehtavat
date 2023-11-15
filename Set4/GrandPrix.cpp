#include <iostream>
#include <string>

class Auto
{
    public:
        std::string rekisteritunnus;
        int huippunopeus;
        int nopeysnyt = 0;
        int kuljettu = 0;
        void set_rekisteri(std::string& rek) 
        {
            rekisteritunnus = rek;
        }
        void set_huippu(int huippu) 
        {
            huippunopeus = huippu;
        }
        void kiihdyta(int maara)  
        {
            nopeysnyt = nopeysnyt + maara;
            if(nopeysnyt > huippunopeus) {
                nopeysnyt = huippunopeus;
            }
            if(nopeysnyt < 0) {
                nopeysnyt = 0;
            }
        }
        void kulje (int tunti) 
        {
            kuljettu = tunti * nopeysnyt;
        }
        
        

};

int main() 
{
    std::cout<<"haha";
    Auto autot[10];
    for (int i = 0; i < 9; i++ ) 
    {
        int maxspeed = rand() % 200 + 100;
        std::string rekisteri = "abc" + i;
        autot[i].set_huippu(maxspeed);
        autot[i].set_rekisteri(rekisteri);

    }
    int b = 0;
    while (true) 
    {
        int abc = rand() % 20 + -10;
        autot[b].kiihdyta(abc);
        autot[b].kulje(1);
        
        if (autot[b].kuljettu >= 10000)
        {
            break;
        }
        if (b < 9) 
        {
            b = b + 1;
        }
        else {
            b = 0;
        }
        
    }
    for (int i = 0; i < 9; i++) {
        std::cout<<"nimi: "<<autot[i].rekisteritunnus<<"\n";
        std::cout<<"huippunopeus: "<<autot[i].huippunopeus<<"\n";
        std::cout<<"nopeus lopussa: "<<autot[i].nopeysnyt<<"\n";
        std::cout<<"matka kuljettu: "<<autot[i].kuljettu<<"\n";
    }
    std::cout<<"haha";
    return 0;
}