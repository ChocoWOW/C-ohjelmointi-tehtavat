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
            if(this->nopeysnyt > huippunopeus) {
                nopeysnyt = huippunopeus;
            }
            if(nopeysnyt < 0) {
                nopeysnyt = 0;
            }
        }
        void kulje (int tunti) 
        {
            kuljettu = kuljettu + tunti * nopeysnyt;
        }
        
        

};

int main() 
{
    std::cout<<"haha";
    Auto autot[10];
    for (int i = 0; i <= 9; i++ ) 
    {
        int maxspeed = rand() % 100 + 100;
        std::string letter = "abc";
        int num = i;
        std::string rekisteri;
        rekisteri = letter + std::to_string(num);
        autot[i].huippunopeus = maxspeed;
        autot[i].rekisteritunnus = rekisteri;

    }
    int b = 0;
    while(autot[b].kuljettu < 10000)
    {   
        int random = rand() % -10 + 15;
        autot[b].kiihdyta(random);
        autot[b].kulje(1);
        if (b < 9)
        {
            b++;
        } else 
        {
            b = 0;
        }
    }
    
    for (int i = 0; i <= 9; i++) {
        std::cout<<"nimi: "<<autot[i].rekisteritunnus<<"\n";
        std::cout<<"huippunopeus: "<<autot[i].huippunopeus<<"\n";
        std::cout<<"nopeus lopussa: "<<autot[i].nopeysnyt<<"\n";
        std::cout<<"matka kuljettu: "<<autot[i].kuljettu<<"\n";
    }
    std::cout<<"haha";
    return 0;
}