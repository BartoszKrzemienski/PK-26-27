#include <iostream> 

using namespace std; 

int main (){

       int wybor;

       do {
        cout << "=== MENU === " << endl; 
        cout << "1. Powitanie " << endl; 
        cout << "2. Instruckja " << endl; 
        cout << "3. Wyjście " << endl; 
        cout << "Wybierz opcje "; 
        cin >> wybor; 
        
        if ( wybor == 1 ){
            cout << "Witaj w naszym programie!" << endl;
        } else if (wybor == 2){
            cout << "Podaj opcję od 1 do 3, aby wykonać akcję."<< endl;
        } else if (wybor == 3){
            cout << "Koniec programu. Do widzenia!" << endl; 
        } else {
            cout << "Niepoprawna opcja. Spróbuj ponownie!" << endl; 
        }

       } while (wybor != 3); 


       return 0; 

}