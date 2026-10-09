#include <iostream> 
#include <iomanip> 

using namespace std; 

int main (){

int wiek; 
cout << "Podaj wiek: " << endl; 
cin >> wiek; 

if (wiek >= 18){
    cout << "Jesteś pełnoletni " << endl; 
} else {
    cout << "Jesteś niepełnoletni " << endl; 
} if (wiek % 2 == 0){
    cout << "Twój wiek jest liczbą parzystą " << endl; 
} else{
    cout << "Twój wiek jest liczbą nieparzystą " << endl; 
}
    return 0; 


}