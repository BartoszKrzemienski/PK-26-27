#include <iostream>

using namespace std; 

int main () {

    int n; 
    cout << "Podaj liczbę n: "; 
    cin >> n; 

    int licznik = n;
    int suma = 0; 

    while (licznik >=1){

        cout << licznik << endl; 
        suma = suma + licznik; 
        licznik --; 

    }
        cout << "Suma tych liczb wynosi: " << suma << endl;

        return 0; 
    }