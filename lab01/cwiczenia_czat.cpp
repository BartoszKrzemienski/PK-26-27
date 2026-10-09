#include <iostream> 
#include <iomanip> 

using namespace std; 

int main () {

    float a; 
    cout << "Podaj ocenę: "; 
    cin >> a; 

    int b; 
    cout << "Podaj jej wagę: ";
    cin >> b; 

    float c; 
    cout << "Podaj drugą ocenę: "; 
    cin >> c; 

    int d; 
    cout << "Podaj wagę drugiej oceny: "; 
    cin >> d; 

    float srednia = ((a * b) + (c * d))/(b + d); 
    cout << fixed << setprecision (2); 
    cout << "Średnia ważona: " << srednia << endl; 
    cout << "Wynik rzeczywisty: " << static_cast<int>(srednia) << endl; 

    return 0; 



}