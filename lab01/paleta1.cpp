#include <iostream> 
 
using namespace std; 

int main (){
    int punkty; 
    cout << "Podaj liczbę punktów (-1 kończy): ";
    cin >> punkty; 
    int suma = 0; 

    while (punkty != -1){
         if(punkty < 0 || punkty > 10){
        cout << "Błędna liczba punktów!"; 
    } else {
        suma = suma + punkty;}
        cout << "Podaj liczbę punktów (-1 kończy): ";
        cin >> punkty; 
    } if (suma < 20){
        cout << "Niedostateczny "; 
    }else if (suma >= 20 && suma <= 35){
        cout << "Dostateczny: "; 
    } else{ 
        cout << "Bardzo dobry" << endl; 

    } 

        cout << "Suma punktów wynosi: " << suma << endl; 
        return 0; 
    }
