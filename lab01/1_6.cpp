#include <iostream> 
#include <iomanip>
using namespace std; 

int main () {

    float P; 
    cout << "P = "; 
    cin >> P; 
     int T; 
    cout << "T = "; 
    cin >> T; 
     float R; 
    cout << "R = "; 
    cin >> R; 

    float I = (P * T * R)/100; 
    cout << fixed << setprecision (2);
    cout << "Wynik rzeczywisty: " << I << endl; 
    cout << "Wynik całkowity: " << static_cast<int>(I) << endl; 
    


    return 0; 

 







}