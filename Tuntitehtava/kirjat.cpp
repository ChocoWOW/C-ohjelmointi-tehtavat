#include <iostream>
#include <string>

using namespace std;

class Julkaisu
{
public:
    string nimi;
    Julkaisu(string _nimi) : nimi(_nimi)
    {
        cout << "Julkaisun konstruktori\n";
    }
    virtual ~Julkaisu(){
        cout << "Julkaisun destruktori\n";
    }
    virtual void tulosta_tiedot() = 0;

};
class Kirja : public Julkaisu
{
public:
    int sivumaara;
    string kirjoittaja;
    Kirja(int _sivumaara, string _kirjoittaja, string nimi) 
    : Julkaisu(nimi), sivumaara(_sivumaara),kirjoittaja(_kirjoittaja) 
    {
        cout << "Kirjan konstruktori\n";
    }

    
    ~Kirja()
    {
        cout << "Kirjan destruktori\n";
    }

    void tulosta_tiedot()
    {
        cout << "Julkaisija: " << nimi << "Kirjoittaja: " << kirjoittaja << "sivumaara: " << sivumaara << "\n";
    }



};
class Lehti : public Julkaisu
{
public:
    string paatoimittaja;
    Lehti(string _paatoimittaja, string nimi) 
    : Julkaisu(nimi), paatoimittaja(_paatoimittaja)
    {
        cout << "Lehden konstruktori\n";
    }

    ~Lehti()
    {
        cout << "Lehden destruktori\n";
    }
    void tulosta_tiedot()
    {
        cout << "Julkaisija: " << nimi << "Paatoimittaja: " << paatoimittaja << "\n";
    }
};

int main()
{
    Julkaisu* kJulkaisu;
    kJulkaisu = new Kirja(100 , "Rosa Liksom" ,"Hytti n:o 6");

    kJulkaisu->tulosta_tiedot();

    delete kJulkaisu;

    Julkaisu* LeJulkaisu;
    LeJulkaisu = new Lehti("Aku ankka" ,"aki hyyppa");

    LeJulkaisu->tulosta_tiedot();

    delete LeJulkaisu;
}