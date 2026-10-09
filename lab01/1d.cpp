#include <iostream> 
using namespace std; 

int main () {

    int A; 
    cout<<"A = "; 
    cin >> A; 

    int B; 
    cout<<"B = ";
    cin >> B; 

    int C; 
    cout<<"C = ";
    cin >> C; 

    int Polepowierzchni = 2 * (A * B) +  2 *(B * C) + 2 * (A*C); 
    
    int Objetosc = A * B * C ; 

    cout << "Pole: " << Polepowierzchni << endl; 
    cout << "Objętość: " << Objetosc << endl; 

    return 0; 



}