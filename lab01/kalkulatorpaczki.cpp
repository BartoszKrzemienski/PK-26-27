#include <iostream>
#include <iomanip> 

using namespace std;

int main (){

    double wagapaczki; 
    cout << "Podaj wagę paczki: "; 
    cin >> wagapaczki; 

    int strefadostawy; 
    cout << "Podaj strefę dostawy paczki: ";
    cin >> strefadostawy; 

    if (wagapaczki <= 0 || (strefadostawy != 1 && strefadostawy != 2)){
        cout << "Błędne dane!";

        return 0;
    }
    double cena; 

    if (strefadostawy == 1) {
        if (wagapaczki > 10){
            cena = 40;
        } else if (wagapaczki > 2 && wagapaczki <= 10){
            cena = 25;
        } else {
            cena = 15;
        }
    } else if (strefadostawy == 2){
        if (wagapaczki > 10){
            cena = 150;     
         } else if (wagapaczki > 2 && wagapaczki <= 10){
            cena = 80; 
         } else {
            cena = 45; 
         }
        } if (wagapaczki >15){
            cena = cena + 30; 
        }
        cout << fixed << setprecision (2);
        cout << "Opłata za dostarczenie paczki wynosi: " << cena << endl; 
    }