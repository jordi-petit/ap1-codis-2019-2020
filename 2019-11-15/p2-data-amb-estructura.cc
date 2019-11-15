
/* Definició d'una data amb estructura. */

#include <iostream>
using namespace std;


// tipus per a dates
struct Data {
    int dia;
    int mes;
    int any;
};

// llegeix tres enters i els retorna com a una data
Data llegir_data() {
    Data d;
    cin >> d.dia >> d.mes >> d.any;
    return d;
}

// escriu una data en formar DD-MM-AAAA
void escriure_data(const Data& d) {
    if (d.dia < 10) cout << 0;
    cout << d.dia;
    cout << '-';
    if (d.mes < 10) cout << 0;
    cout << d.mes;
    cout << '-';
    cout << d.any;
}


int main() {
    Data d = llegir_data();
    escriure_data(d);
    cout << endl;
}
