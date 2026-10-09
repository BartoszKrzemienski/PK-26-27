#include <iostream> 

using namespace std; 

int main (){
    
int n; 
cout << "Podaj n:"; 
cin >> n;

int licznik = 2; 
while (licznik <= n) {
    if (licznik % 2 == 0){
        cout << licznik << " "; 
    }
    licznik ++;
} 
return 0; 

}