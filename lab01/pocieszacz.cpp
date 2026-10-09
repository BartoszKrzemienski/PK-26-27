#include <iostream>
#include <string>

using namespace std;

int main() {
    int wybor;

    // 1. Pętla DO-WHILE do obsługi menu
    do {
        cout << "\n========================================" << endl;
        cout << "   PROGRAM POCIESZAJACY DLA MOJEJ MIŁOŚCI " << endl;
        cout << "========================================" << endl;
        cout << "1. Dlaczego nie musisz sie martwic?" << endl;
        cout << "2. Policz, jak bardzo Cie kocham" << endl;
        cout << "3. Bateria miłosna (100%)" << endl;
        cout << "4. Wyjście" << endl;
        cout << "----------------------------------------" << endl;
        cout << "Wybierz opcje (1-4): ";
        cin >> wybor;
        cout << endl;

        if (wybor == 1) {
            cout << ">>> Usmiechnij sie! Jestem przy Tobie i razem poradzimy sobie ze wszystkim. <<<\n";
            cout << ">>> Pamiętaj, że jakikolwiek problem minie, a moje uczucie zostaje na zawsze! <<<\n";

        } else if (wybor == 2) {
            int ileKrokow;
            cout << "Podaj liczbe od 1 do 10, aby zobaczyc sile mojego uczucia: ";
            cin >> ileKrokow;

            cout << "\nLiczymy..." << endl;
            
            // 2. Pętla FOR do wyliczenia mocy miłości (potęgowanie/mnożenie jak przy silni!)
            long long mocMilosci = 1;
            for (int i = 1; i <= ileKrokow; i++) {
                mocMilosci *= 100; // Każdy krok zwiększa moc x100
                cout << "Krok " << i << ": Kocham Cie na poziomie " << mocMilosci << "%!" << endl;
            }
            cout << "\nI tak z kazdym dniem ta liczba rośnie bez końca! " << endl;

        } else if (wybor == 3) {
            int poziom = 0;
            cout << "Ładowanie Twojego humoru:" << endl;
            
            // 3. Pętla WHILE jako pasek ładowania
            while (poziom <= 100) {
                cout << "Ładowanie usmiechu... " << poziom << "%" << endl;
                poziom += 20;
            }
            cout << "\n Bateria naładowana! Masz juz oficjalny zakaz martwienia sie! " << endl;

        } else if (wybor == 4) {
            cout << "Pamiętaj: Kocham Cię najmocniej na świecie! Wszystko będzie dobrze! " << endl;

        } else {
            cout << "Nie ma takiej opcji, ale i tak Cie kocham! Spróbuj ponownie." << endl;
        }

    } while (wybor != 4);

    return 0;
}