#include <iostream>
#include <iomanip> 
using namespace std; 

int main () { 

    double R; 
    cout << "R = "; 
    cin >> R; 

    double Pole = 3.14 * (R*R) ;
    double Obwod = 2 * R * 3.14 ; 
    cout << fixed << setprecision (2); 
    cout << "Obwód: " << Obwod << endl; 
    cout << "Pole: " << Pole << endl; 

    return 0; 


}