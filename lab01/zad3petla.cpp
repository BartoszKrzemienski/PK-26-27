#include <iostream> 
#include <iomanip> 

using namespace std; 

int main () {

    int wynik;
    cout << "Podaj wynik ze sprawdzianu: "; 
    cin >> wynik; 

    if (wynik < 0 || wynik > 100) {
        cout << "Błędna liczba punktów! "; 
    } else if (wynik < 50) {
        cout << "Ocena 2 " << endl; 
    } else if (wynik >= 50 && wynik <=69){
        cout << "Ocena 3 " << endl; 
    } else if (wynik >=70 && wynik <= 88){
        cout << "Ocena 4 " << endl; 
    } else if (wynik >= 89 && wynik <= 100){
        cout << "Ocena 5 " << endl; 
    }


return 0; 




}