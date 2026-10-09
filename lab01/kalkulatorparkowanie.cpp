#include <iostream> 
#include <iomanip> 
using namespace std; 

int main () {
    int pojazd; 
    cout << "Podaj rodzaj pojazdu: "; 
    cin >> pojazd; 

    int liczbagodzin; 
    cout << "Podaj liczbę godzin: ";
    cin >> liczbagodzin; 

    if (pojazd != 1 && pojazd != 2 && pojazd != 3 || liczbagodzin <= 0) {
        cout << "Błędne dane wejściowe!" << endl; 
        return 0;
    } 
    double rachunek = 0; 
    if (pojazd == 1){
        if (liczbagodzin > 2) {
        rachunek = (liczbagodzin - 2) * 5;
        } 
    } else if (pojazd == 2){
        if (liczbagodzin <=2 ){
            rachunek = liczbagodzin * 8; 
        } else {
            rachunek = (liczbagodzin - 2 ) * 12 + 16; 
        }
    } else if (pojazd == 3){
        rachunek = liczbagodzin * 20; 
    } if (liczbagodzin > 8){
        rachunek = 0.85 * rachunek; 
    }
    cout << fixed << setprecision (2);
    cout << "Opłata za parking wynosi: " << rachunek << "zł" << endl;
    
    return 0; 
}
     
   