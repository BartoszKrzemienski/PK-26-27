#include <iostream>
#include <iomanip> 

using namespace std; 

int main(){
    int liczba; 
    cout << "Podaj liczbę całkowitą: ";
    cin >> liczba; 
    long long kwadrat; 
    long long suma = 0;
    int ilosc = 0;
    if (liczba <= 0){
        cout << "Podano liczbę mniejszą lub równą od 0";
        return 0;
    }  

    for (int i = 1; i <= liczba; i++){
        kwadrat = i*i;  
        suma = suma + kwadrat;
        ilosc++;
        }
        double srednia = static_cast<double>(suma) / ilosc;
        cout << fixed << setprecision (2);  
        cout << "Suma kwadratów: " << suma << endl; 
        cout << "Średnia kwadratów: " << srednia <<endl; 

        return 0; 
}