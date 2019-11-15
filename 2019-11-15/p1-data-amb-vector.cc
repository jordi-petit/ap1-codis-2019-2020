
/* Definició d'una data amb vector. */

#include <iostream>
#include <vector>
using namespace std;


// tipus per a dates
using Data = vector<int>;   // 3 elements: dia, mes, any

// llegeix tres enters i els retorna com a una data
Data llegir_data() {
    Data d(3);
    cin >> d[0] >> d[1] >> d[2];
    return d;
}

// escriu una data en formar DD-MM-AAAA
void escriure_data(const Data& d) {
    if (d[0] < 10) cout << 0;
    cout << d[0];
    cout << '-';
    if (d[1] < 10) cout << 0;
    cout << d[1];
    cout << '-';
    cout << d[2];
}


int main() {
    Data d = llegir_data();
    escriure_data(d);
    cout << endl;
}
