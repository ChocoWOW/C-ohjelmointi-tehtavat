#include <iostream>

#include <string>
#include <limits>

using namespace std;

int main ()
{
  cout << "Pelataan kiinalaista numeropelia! \n";
  cout << "Korkein mahdollinen numero on: " << std::numeric_limits<int>::max() << "\n";

  while (true) {
    int numero;
    int max = numeric_limits<int>::max();

    // jos syöttää korkeimman mahdollisimman luvun peli vastaa negatiivisella luvulla - 1
    cout<<"Anna luku: ";
    cin>>numero;
    if (numero != 0 && numero != max) {
      cout<<"Voitin, minun luku oli: " << numero + 1 << "\n";
      continue;
    } else if (numero == max){
      cout<<"Tasapeli tuli";
      break;
    } else{
      cout<<"Voitit(syotit numeron 0)";
      break;
    }
  }
  
  return 0;
  
}