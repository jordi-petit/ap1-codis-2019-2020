/* Generar totes les combinacions d'n bits. */

#include <iostream>
#include <vector>
using namespace std;


void escriure(const vector<int>& v) {
    for (int x : v) cout << x;
    cout << endl;
}


// Genera totes les combinacions de n bits
// en v, havent fixat les primeres i posicions de v.
void genera(vector<int>& v, int i, int n) {
    if (i == n) {
        escriure(v);
    } else {
        v[i] = 0;
        genera(v, i + 1, n);
        v[i] = 1;
        genera(v, i + 1, n);
    }
}


int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    genera(v, 0, n);
}
