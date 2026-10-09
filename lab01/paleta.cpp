#include <iostream> 

using namespace std; 

int main (){

    int liczba; 
    cout << "Podaj liczbę dodatnią (-1 kończy): ";
    cin >> liczba; 
    int max = liczba;

    while(liczba != -1){
        if(liczba > max){
            max = liczba; 
        }
        
        cout << " podaj liczbę dodarnią (-1 kończy): "; 
        cin >> liczba; 
    }
        
    cout << "Największa podana liczba to: " << max << endl; 
    return 0; 





}