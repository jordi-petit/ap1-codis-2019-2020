/* Suma d'una seqüència d'enters */
/* recordeu que cal picar Control+D per finalitzar l'entrada al terminal) */

#include <iostream>
using namespace std;

int main() {
    int s = 0;
    int x;
    while (cin >> x) {
        s += x;
    }
    cout << s << endl;
}
