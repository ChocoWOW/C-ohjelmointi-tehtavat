#include <iostream>

#include <string>
#include <limits>
#include <cstdlib>

using namespace std;

int main() {
    int numero1, numero2, arvaus, vastaus;
    cout << "Pelataan arvaus peliä \n";
    cout << "Valitse kaksi lukua joiden valilta pitaa arvata kolmas luku \n";
    cout<<"Valitse ensimmainen luku: ";
    cin>>numero1;
    cout << endl;
    while (true) {
        cout<<"Valitse toinen luku (isompi kuin ensimmainen): ";
        cin>>numero2;
        if (numero2 > numero1) {
            break;
        }else {
            cout<<"valitse toinen luku";
        }
    }

    vastaus = rand() % numero2 + numero1;



    while (true) {
        cout<<"Valitse luku valilta " << numero1 << " ja " << numero2 << "\n";
        cin>>arvaus;
        if (vastaus == arvaus){
            cout<<"Vastasit oikein";
            break;
        }else if (vastaus > arvaus){
            cout<<"Liian pieni \n";
        }else {
            cout<<"Liaan suuri \n";
        }
    }

    return 0;
}