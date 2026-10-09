#include <iostream> 
#include <iomanip> 

using namespace std; 

int main () {

        int liczba; 
        cout << "Podaj liczbę trzycyfrową dodatnią: ";
        cin >> liczba; 

            float pomoc1 = liczba/100; 
            int setki = static_cast<int>(pomoc1); 

        int dziesiatkiprobna = liczba - (setki * 100); 

        float dziesiatkiprobna1 = dziesiatkiprobna / 10; 

        int dziesiatki = static_cast<int>(dziesiatkiprobna1);

        int jednosci = dziesiatkiprobna - (dziesiatki*10);

        cout << "Odwrócona liczba: " << jednosci << dziesiatki << setki << endl; 
        
        int sumacyfr = setki + dziesiatki + jednosci; 
        
        cout << "Suma cyfr: " << sumacyfr << endl; 
    

                return 0; 
    }