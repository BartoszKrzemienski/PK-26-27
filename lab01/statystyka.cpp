#include <iostream> 
#include <iomanip> 

using namespace std; 

int main (){

    int liczba; 
    cout << "Podaj liczbę całkowitą (0 kończy): "; 
    cin >> liczba; 
    int ilosc_dod = 0; 
    int ilosc_ujem = 0; 

    while (liczba != 0 ){
        if (liczba > 0){
            ilosc_dod++; 
            cout << "Podaj liczbę całkowitą (0 kończy): ";
            cin >> liczba;        
        } else{
            ilosc_ujem++; 
            cout << "Podaj liczbę całkowitą (0 kończy): ";
            cin >> liczba; 
        }
         }
         
        if (ilosc_ujem == 0 || ilosc_dod == 0){
            cout << "Błędnie wprowadzone dane! "; 
            return 0; 
    }

    cout << "Ilość dodatnich liczb całkowitych: " << ilosc_dod << endl; 
    cout << "Ilość ujemnych liczb całkowitych: " << ilosc_ujem << endl; 

    return 0; 




}