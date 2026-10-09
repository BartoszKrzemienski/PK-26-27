#include <iostream> 
#include <iomanip> 

using namespace std; 

int main (){
    int ocena; 
    int suma = 0; 
    int ilosc = 0; 

    while(ocena != -1){
        suma = suma + ocena; 
        ilosc++; 

        cout << "Podaj ocenę (-1 kończy): ";
        cin >> ocena; 

    }
if (ilosc >0){
    double srednia = static_cast <double>(suma) / ilosc; 
    cout << fixed << setprecision(2); 
    cout << "Średnia ocen wynosi: " << srednia << endl; 
} else {
    cout << "Nie wprowadzono żadnych ocen!"; 
}

return 0; 

}