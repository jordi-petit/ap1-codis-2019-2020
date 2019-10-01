/* Suma d'una seqüència de reals */
/* (recordeu que cal picar Control+D per finalitzar l'entrada al terminal) */

#include <iostream>
using namespace std;

int main() {
    double s = 0;
    double x;
    while (cin >> x) {
        s += x;
    }
    cout << s << endl;
}
