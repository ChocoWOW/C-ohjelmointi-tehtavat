#include <iostream>
#include <string>

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


int main()
{
    std::cout<<"haha \n";
    Hissi hiisi(0,10);
    hiisi.siirry_kerrokseen(6);
    std::cout<<hiisi.kerros_nyt;
    
    return 0;
}