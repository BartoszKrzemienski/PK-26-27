#include <iostream> 

 using namespace std; 

 int main (){
        int liczba; 
        cout << "Podaj liczbę całkowitą dodatnią: " ;         
        cin >> liczba; 
       int iloczyn = 7; 
       cout << "Tabliczka mnożenia dla: " << liczba << endl; 

       for (int i = 1; i <= 10 ; i++){
              if (i <= 10){
              iloczyn = liczba * i;  
              cout << liczba << " * " << i << " = " << iloczyn << endl; 
              }
      

       }
      
       return 0;





 }