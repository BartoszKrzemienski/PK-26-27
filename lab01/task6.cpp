#include <iostream> 

using namespace std; 

int main (){
    
    int liczba; 
    do {
        cout << "Podaj liczbę parzystą: "; 
        cin >> liczba; 
    } while (liczba % 2 != 0);

    cout << "Brawo! Liczba parzysta to: " << liczba << endl; 

}