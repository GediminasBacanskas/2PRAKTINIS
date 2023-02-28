#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
struct Aikstele{
    string marke;
    int metai;
    double litrazas;
};
int main() {
    cout << " Uzpildykite aikstele " << endl;
    cout << " Iveskite, kokio dydzio bus aikstele" << endl;
    int dydis;
    vector<Aikstele> aikstele;
    cin >> dydis;
    if(dydis > 0 ) {
    cout << " Iveskite kiek stoves automobiliu aiksteleje " << endl;
    int automobilis;
    cin >> automobilis;
    bool Tikrinimas = true;
    int uzimta = 0;

   Aikstele vieta;
        for (int i = 0; i < dydis; ++i) {
            if (automobilis > 0) {
                cout << " Aiksteles vieta: " << i << ". Ar norite ja uzpildyti?(0 - Ne, 1- Taip)" << endl;
                cin >> Tikrinimas;
                if (Tikrinimas) {

                    cout << "Iveskite automobilio marke: " << endl;
                   cin >> vieta.marke;                                     // objektas
                    cout << "Iveskite automobilio metus" << endl;
                   cin >> vieta.metai;
                    cout << " Iveskite litraza " << endl;
                     cin >> vieta.litrazas;
                    aikstele.push_back(vieta);                          // dejimas i sarasa
                    automobilis--;

                }
            } else break;
        }
    }
    else cout << " Tokia aikstele negali buti " << endl;
    for (auto it: aikstele) {                   // atspausdinimas
        cout << it.marke << endl;


    }

    return 0;
}
