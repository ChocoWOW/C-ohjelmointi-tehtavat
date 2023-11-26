#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Hissi
{
    private:
        
    public:
        int ylin_kerros;
        int alin_kerros;
        int kerros_nyt;
        
        Hissi(int alin, int ylin){
            kerros_nyt = alin_kerros;
            alin_kerros = alin;
            ylin_kerros = ylin;

        }
        void kerros_alas()
        {
            kerros_nyt -= 1;
        }
        void kerros_ylos()
        {
            kerros_nyt += 1;
        }
        void siirry_kerrokseen(int kohde)
        {
            while(kohde != kerros_nyt)
            {
                if (kohde < kerros_nyt)
                {
                    kerros_alas();
                }else if (kohde > kerros_nyt)
                {
                    kerros_ylos();
                }
                
            }
            std::cout<<"Hissi on kerroksessa: "<< kerros_nyt << "\n";
        }
        
};
class Talo
{
    public:
        
        int maara;
        int ylin_kerros;
        int alin_kerros;
        vector<Hissi> h;

        
        Talo(int lkm, int alin, int ylin) {
            
            maara = lkm;
            alin_kerros = alin;
            ylin_kerros = ylin;
            Hissi vissi(alin_kerros, ylin_kerros);
            while(h.size() < maara) 
            {
                h.push_back(vissi);
            }

        }
       
        void Aja_hissia(int hissi, int kohde) {
            h[hissi].siirry_kerrokseen(kohde);
        }
        void palohalytys()
        {
            cout<<"Varoitus tulipalo! \n";
            for(int i; i < h.size(); i++){
                h[i].siirry_kerrokseen(alin_kerros);
            }
        }
        ~Talo()
        {
            cout <<"moro";
        }
        
        
        
        


};
int main()
{
    Talo kartanno(5, 0, 10);
    
    kartanno.Aja_hissia(2, 3);
    kartanno.Aja_hissia(1, 3);

    cout << kartanno.h[2].kerros_nyt << "\n";
    cout << kartanno.h[1].kerros_nyt << "\n";

    kartanno.palohalytys();
    
    
}