#include <iostream> 

using namespace std; 

int main(){
    
    int n; 
    cout << "Podaj liczbę dodatnią całkowitą n: "; 
    cin >> n; 
    int licznik = 1; 

    while(licznik <= n){
        cout << licznik << " ^ 2  = " << (licznik * licznik)  << endl;
        licznik ++; 
    } 

    return 0; 
}