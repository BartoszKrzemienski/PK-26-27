#include <iostream> 
#include <iomanip> 

using namespace std; 

int main () {

    float kwotapln; 
    cout << "Podaj kwotę w PLN: ";
    cin >> kwotapln; 

    float kurseuro; 
    cout << "Podaj kurs EUR: "; 
    cin >> kurseuro; 

    float prowizjabanku; 
    cout << "Podaj prowizję banku (w procentach) "; 
    cin >> prowizjabanku; 

        float kwotapoprowizji = kwotapln * (1 - (prowizjabanku/100));
        float wyplataeuro = kwotapoprowizji / kurseuro; 

        float prowizjadlabanku = kwotapln - kwotapoprowizji; 
        cout << fixed << setprecision(2); 

            cout << "Kwota pobranej prowizji: " << prowizjadlabanku << endl; 
            cout << "Kwota po pobranej prowizji: " << kwotapoprowizji << endl; 
            cout << "Ostateczna kwota w euro: " << wyplataeuro << endl; 

            return 0; 
}