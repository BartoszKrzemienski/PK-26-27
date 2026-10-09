#include <iostream> 

using namespace std; 

int main (){
    int n; 
    cout << "Podaj liczbę n: "; 
    cin >> n;
    int suma = 0;  
    
    for(int i = 1; i <= n; i ++){
        if (i % 3 == 0){
            suma = suma + i; 
        }
    }
    cout << "Suma liczb podzielnych przez 3 wynosi: " << suma << endl; 
    return 0; 
}