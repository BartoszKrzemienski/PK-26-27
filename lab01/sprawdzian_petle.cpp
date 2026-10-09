#include <iostream> 

using namespace std; 

int main(){

    int liczba; 
    cout << "Podaj liczbę całkowitą (0 kończy): "; 
    cin >> liczba;
    int max = 0; 

    int licznik = 0; 
    while (liczba != 0){
        if(liczba > max){
            max = liczba; 
        }
        cout << "Podaj liczbę całkowitą (0 kończy): ";
        cin >> liczba; 
    
    
    
    }
    cout << "Największa liczba spośród podanych: " <<max << endl; 
}