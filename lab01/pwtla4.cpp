#include <iostream> 

using namespace std; 

int main (){
    int haslo = 1234; 
    cout << "Podaj czterocyfrowe hasło: "; 
    cin >> haslo; 

    while (haslo != 1234){
        if (haslo !=1234){
        cout << "Błędny PIN, spróbuj ponownie! ";
        }
        cin >> haslo; 
    }
    cout << "Dostęp przyznany!";
    return 0; 
}