#include <iostream>
#include <string>

using namespace std;
class Julkaisu
{
    private:

    string _nimi;

    public:
        Julkaisu(const string& nimi) : _nimi(nimi)
        {}
        virtual void tulosta_tiedot() const
        {
            cout << "Julkaisun nimi: " << _nimi << endl;
        }

};
class Kirja: public Julkaisu
{
private:
    string _kirjoittaja;
    int _sivut;

public:

    Kirja(const string& nimi, const string& kirjoittaja, int sivut):
        Julkaisu(nimi), _kirjoittaja(kirjoittaja), _sivut(sivut)
    {}
};