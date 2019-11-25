/* Generar totes les combinacions d'n valors entre 0 i k-1. */

#include <iostream>
#include <vector>
using namespace std;


void escriure(const vector<int>& v) {
    for (int x : v) cout << x;
    cout << endl;
}


// Genera totes les combinacions de n valors entre 0 i k-1
// en v, havent fixat les primeres i posicions de v.
void genera(vector<int>& v, int i, int n, int k) {
    if (i == n) {
        for (int x : v) cout << x;
        cout << endl;
    } else {
        for (int j = 0; j < k; ++j) {
            v[i] = j;
            genera(v, i + 1, n, k);
        }
    }
}


int main() {
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    genera(v, 0, n, k);
}
