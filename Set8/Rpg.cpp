#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Pelihahmo
{
public:
    string nimi;
    int level;
    int hp;
    int gold;
    vector<Objekti*> _item;

    Maastoruutu* sijainti;
    
};
class Objekti
{
public:
    string nimi;
    Objekti* item;
};
class Taisteluvaruste : public Objekti
{
public:
    int attack;
    int defense;
};
class MuuObjekti : public Objekti
{
public:
    int weight;
    int worth;
};



class Maastoruutu
{
public:
    int x;
    int y;
    vector<Maastoruutu*> vihu;
};
class Maastotyyppi : public Maastoruutu
{
public:
    float liikkumisvaikeus;
    float taisteluvaikeus;
};

class Vihollinen
{
public:
    int hp;
    Maastoruutu* _vihu;
};
class Vihollistyyppi : public Vihollinen
{
public:
    int alku_hp;
    int alku_attack;
    int alku_defense; 
    Vihollinen* orkki;
    Vihollinen* hämähäkki;
};



