#include <iostream> 

using namespace std; 

int main (){

    int liczba; 
    cout << "Podaj liczbę: "; 
    cin >> liczba;

    int suma = 0; 
    while (liczba != 0){
       suma = suma + liczba; 
       cout << "Podaj liczbę (0 kończy): ";
       cin >> liczba; 
       }
    cout << "Suma podanych liczb: " << suma << endl; 

    return 0; 

}