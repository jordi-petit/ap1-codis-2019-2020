/* Segment nul més llarg d'un vector ordenat. */

#include <iostream>
#include <vector>
using namespace std;


// Troba el segment nul més llarg d'un vector ordenat.
// Prec: v està ordenat creixenment.
// Post: - (i,j) conté els índexos del segment nul més llarg de v.
//       - Quan el segment és buit, i > j.
void segment_nul_mes_llarg (const vector<int>& v, int& i, int& j) {
    int s = 0;
    for (int x : v) s += x;

    i = 0;
    j = v.size() - 1;
    while (s != 0) {
        if (s > 0) {
            s -= v[j];
            --j;
        } else {
            s -= v[i];
            ++i;
        }
    }
}


int main() {
    vector<int> v = {-7, -3, -2, 5, 13};

    int i, j;
    segment_nul_mes_llarg(v, i, j);

    if (i > j) cout << "no n'hi ha" << endl;
    else cout << i << "," << j << endl;
}

