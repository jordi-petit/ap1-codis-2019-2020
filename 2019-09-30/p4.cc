/* Mitjana d'una seqüència (no buida!) de reals, amb dos dígits de precisió al resultat */

#include <iostream>
using namespace std;

int main() {
    // aquestes dues línies "màgiques" al principi del main formaten els reals amb 2 dígits:
    cout.setf(ios::fixed);
    cout.precision(2);

    double s = 0;
    int n = 0;
    double x;
    while (cin >> x) {
        s += x;
        ++n;
    }
    cout << s/n << endl;
    cout << n << endl;
}
