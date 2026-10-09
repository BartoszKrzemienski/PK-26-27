#include <iostream> 
#include <iomanip> 

using namespace std; 

int main () {

        double r; 
        cout << "Podaj promień walca: "; 
        cin >> r; 

            double h; 
            cout << "Podaj wysokość walca: "; 
            cin >> h; 


            const double pi = 3.14159 ; 


            double objetoscwalca = pi * (r * r) * h ; 


                    double polepowierzchniwalca = 2 * pi * r * (r + h); 

                    cout << fixed << setprecision (3); 

                    cout << "Objętość walca: " << objetoscwalca << endl; 
                    cout << "Pole powierzchni walca: " << polepowierzchniwalca << endl; 

                    return 0;
                
                
                
                }