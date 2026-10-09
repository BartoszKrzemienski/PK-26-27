#include <iostream> 
#include <iomanip> 

using namespace std; 

int main (){

        int liczba; 
        cout << "Podaj liczbę: "; 
        cin >> liczba; 

            if (liczba == 0) {
                    cout << "Liczba jest równa 0 " << endl; 
            } else if (liczba > 0){
                cout << "Liczba jest dodatnia " << endl; 
            } else {
                cout << "Liczba jest ujemna " << endl; 
            }

                    return 0; 




}