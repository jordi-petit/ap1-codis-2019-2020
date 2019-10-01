/* Mitjana d'una seqüència (no buida!) de reals */

#include <iostream>
using namespace std;

int main() {
    double s = 0;
    int n = 0;
    double x;
    while (cin >> x) {
        s += x;
        ++n;
    }
    cout << s/n << endl;
}
