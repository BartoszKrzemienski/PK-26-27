#include <iostream>

using namespace std; 

int main (){
    int liczba; 
    cout << "Podaj liczbę dodatnią całkowitą: "; 
    cin >> liczba; 
    long long silnia = 1;
    
    for (int i = 1; i <= liczba; i++){
        silnia = silnia * i;   
    }

    cout << "Silnia liczby " << liczba << " to: " << silnia << endl; 
    return 0; 





}

