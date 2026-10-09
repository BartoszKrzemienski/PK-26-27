#include <iostream> 
#include <iomanip> 

using namespace std; 

int main () {

    int liczbasekund; 
    cout << "Podaj liczbę sekund: "; 
    cin >> liczbasekund; 

    int godzina = liczbasekund/3600 ;
    int sekunda = liczbasekund % 3600; 
    int minuta = sekunda / 60; 
    int koncowesekundy = sekunda % 60;
    cout << "Czas: " << godzina << "godz. " << minuta << "min. " << koncowesekundy << "sek. " << endl; 

    return 0; 

}