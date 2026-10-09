#include <iostream> 
#include <iomanip> 

using namespace std; 

int main () { 

            int liczba; 
            cout << " Podaj liczbę trzycyfrową dodatnią: "; 
            cin >> liczba; 

            int setki = liczba/100; 
            int dziesiatki = (liczba/10) % 10;
            int jednosci = liczba % 10; 

            cout << "Odwrócona liczba: " << jednosci << dziesiatki << setki << endl;
            int sumacyfr = setki + dziesiatki + jednosci;  
            cout << "Suma cyfr: " << sumacyfr << endl; 

                return 0; 




}