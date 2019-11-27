/* mostra una manera de posar n reines en un tauler n × n sense amenaçar-se */


#include <iostream>
#include <vector>

using namespace std;


void escriure_reines(int n, const vector<int>& q) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
           if (q[i] == j) cout << "o ";
           else cout << ". ";
        }
        cout << endl;
    }
    cout << endl;
}


int diag1(int i, int j) {
    return i + j;
}


int diag2(int i, int j, int n) {
    return n - j - 1 + i;
}


bool es_pot_posar_reina(int n, vector<int>& q, vector<bool>& r, vector<bool>& d1, vector<bool>& d2, int i, int j) {
    return not r[j] and not d1[diag1(i, j)] and not d2[diag2(i, j, n)];
}


void posa_reina(int n, vector<int>& q, vector<bool>& r, vector<bool>& d1, vector<bool>& d2, int i, int j) {
    q[i] = j;
    r[j] = true;
    d1[diag1(i, j)] = true;
    d2[diag2(i, j, n)] = true;
}


void treu_reina(int n, vector<bool>& r, vector<bool>& d1, vector<bool>& d2, int i, int j) {
    r[j] = false;
    d1[diag1(i, j)] = false;
    d2[diag2(i, j, n)] = false;
}


void totes_reines(int n, vector<int>& q, vector<bool>& r, vector<bool>& d1, vector<bool>& d2, bool& trobat, int i) {
    if (i == n) {
        escriure_reines(n, q);
        trobat = true;
    } else {
        for (int j = 0; j < n; ++j) {
            if (es_pot_posar_reina(n, q, r, d1, d2, i, j)) {
                posa_reina(n, q, r, d1, d2, i, j);
                totes_reines(n, q, r, d1, d2, trobat, i + 1);
                if (trobat) return;
                treu_reina(n, r, d1, d2, i, j);
            }
        }
    }
}


int main() {
    int n;
    cin >> n;

    bool trobat = false;
    vector<int> q(n);
    vector<bool> r(n, false);
    vector<bool> d1(2*n - 1, false);
    vector<bool> d2(2*n - 1, false);
    totes_reines(n, q, r, d1, d2, trobat, 0);
    if (not trobat) cout << "no hi ha solució" << endl;
}
