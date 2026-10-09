#include <iostream>

using namespace std; 

int main(){
    int ocena; 
    do{  
        cout << "Podaj ocenę: " ; 
        cin >> ocena; 
        if (ocena < 1 || ocena > 6){
             cout << "Błędnie podana ocena!" << endl;
        }
     
        } while (ocena < 1 || ocena > 6);
        
        cout << "Zapisano ocenę: " << ocena << endl;
        return 0;  
    }
