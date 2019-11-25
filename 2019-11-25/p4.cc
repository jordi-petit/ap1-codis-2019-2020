/* Generar totes les permutacions d'n objectes. */

#include <iostream>
#include <vector>
using namespace std;



void escriure(const vector<int>& v) {
    for (int x : v) cout << x;
    cout << endl;
}


// Genera totes les permutacions de n objectes en v,
// havent fixat les seves i primeres posicions i havent
// usat els elements marcats en u.
void genera(vector<int>& v, vector<bool>& u, int i, int n) {
    if (i == n) {
        for (int x : v) cout << x;
        cout << endl;
    } else {
        for (int j = 0; j < n; ++j) {
            if (not u[j]) {
                v[i] = j;
                u[j] = true;
                genera(v, u, i + 1, n);
                u[j] = false;
            }
        }
    }
}


int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    vector<bool> u(n, false);
    genera(v, u, 0, n);
}
