#include <iostream> 

using namespace std; 

int main (){
    int ilosc; 
    cout << "Ile liczb chcesz wprowadzić? "; 
    cin >> ilosc;
    int suma = 0; 
    int liczba;  

    for (int i = 1; i <= ilosc; i++){
        cout << "Podaj liczbę " << i << endl; 
        cin >> liczba; 
        suma = suma + liczba; 
    }
    cout << "Suma liczb wynosi: " << suma << endl;
    double srednia = static_cast<double>(suma) / ilosc; 
    cout << "Średnia liczb wynosi: " << srednia << endl; 
    return 0; 

}