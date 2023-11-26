#include <iostream>
#include <string>

class Ajoneuvo
{
    public:
    int huippunopeus;
    int kayttoonottovuosi;
    int paino;

    Ajoneuvo(int _huippunopeus, int _kayttoonottovuosi, int _paino) : 
    huippunopeus(_huippunopeus), kayttoonottovuosi(_kayttoonottovuosi),  paino(_paino)
    {
        
    }

    ~Ajoneuvo(){

    }

};


class Autot : public Ajoneuvo
{
    public:
    int renkaatLkm;
    int ovetLkm;
    Autot(int _huippunopeus, int _kayttoonottovuosi, int _paino, int _renkaatLkm, int _ovetLkm) : 
        Ajoneuvo(huippunopeus, kayttoonottovuosi, paino), renkaatLkm(_renkaatLkm), ovetLkm(_ovetLkm) 
    {
        
    }
    ~Autot(){

    }
    

};


class HenkiloAuto : public Autot
{
    public:
    int matkustajaMax;
    HenkiloAuto(int _huippunopeus, int _kayttoonottovuosi, int _paino, int _renkaatLkm, int _ovetLkm, int _matkustajaMax)
    : Autot(huippunopeus, kayttoonottovuosi, paino, renkaatLkm, ovetLkm), matkustajaMax(_matkustajaMax)
    {

    }

};


class KuormaAuto : public Autot
{
    public:
    int kuormaMaxPaino;
    KuormaAuto(int _huippunopeus, int _kayttoonottovuosi, int _paino, int _renkaatLkm, int _ovetLkm, int _kuormaMaxPaino) 
    : Autot(huippunopeus, kayttoonottovuosi, paino, renkaatLkm, ovetLkm), kuormaMaxPaino(_kuormaMaxPaino) 
    {

    }
    ~KuormaAuto()
    {

    }
};


class Lentokoneet : public Ajoneuvo
{
    public:
    int LentokorkeusMax;
    Lentokoneet(int _huippunopeus, int _kayttoonottovuosi, int _paino, int _LentoKorkeusMax)
    : Ajoneuvo(huippunopeus, kayttoonottovuosi, paino), LentokorkeusMax(_LentoKorkeusMax)
    {

    }
    ~Lentokoneet()
    {

    }

};


class Laivat : public Ajoneuvo
{
    public:
    int MaxSyvyys;
    Laivat(int _huippunopeus, int _kayttoonottovuosi, int _paino, int _MaxSyvyys)
    : Ajoneuvo(huippunopeus, kayttoonottovuosi, paino), MaxSyvyys(_MaxSyvyys)
    {

    }

};


int main(){
    Ajoneuvo* vroom;
    vroom = new Ajoneuvo(120, 130,140);
    std::cout << vroom->huippunopeus;
    delete vroom;

    Autot* woosh;
    woosh = new Autot(120, 130, 140, 3, 5);
    delete woosh;

    HenkiloAuto* wiue;
    wiue = new HenkiloAuto(123, 154, 354, 2, 4, 10);
    delete wiue;
    
    KuormaAuto* kakaka;
    kakaka = new KuormaAuto(123, 15453, 324, 2, 6, 100);
    delete kakaka;

    Laivat* sfafs;
    sfafs = new Laivat(123, 34254, 324, 123);

    Lentokoneet* gegeg;
    gegeg = new Lentokoneet(123, 123, 12, 342);
}