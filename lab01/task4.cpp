#include <iostream> 
#include <iomanip> 

using namespace std; 

int main (){
    int ocena; 
    cout << "Podaj ocenę (-1 kończy): "; 
    cin >> ocena; 

    int suma = 0; 
    int ilosc = 0; 

    while(ocena != -1){
        if(ocena < 1 || ocena > 6 ){
            cout << "Błąd we wprowadzonych danych!";
        } else{
            suma = suma + ocena; 
            ilosc++; 
        } 
            cout << "Podaj ocenę (-1 kończy): "; 
            cin >> ocena; 
    }   if (ilosc > 0){
        double srednia = static_cast<double>(suma)/ ilosc; 
    
        cout << "Suma ocen wynosi: " << suma << endl;
        cout << "Średnia ocen wynosi: " << srednia << endl; 
    } else {
        cout << "Nie wprowadzono poprawnych danych ";
    }
        return 0; 


}