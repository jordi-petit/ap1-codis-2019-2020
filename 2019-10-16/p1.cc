#include <iostream>
#include <vector>
#include <cassert>
#include <cmath>
using namespace std;


// retorna el producte escalar de dos vectors de la mateix mida
double producte_escalar(const vector<double>& x, const vector<double>& y) {
    assert(x.size() == y.size());
    double s = 0;
    for (int i = 0; i < x.size(); ++i) {
        s += x[i] * y[i];
    }
    return s;
}


// retorna el mòdul d'un vector
double modul(const vector<double>& x) {
    return sqrt(producte_escalar(x, x));
}


// retorna l'element més petit del vector v
// precondició: v no és buit
double minim(const vector<double>& v) {
    assert(v.size() != 0);
    double min = v[0];
    for (int i = 1; i < v.size(); ++i) {
        if (v[i] < min) {
            min = v[i];
        }
    }
    return min;
}


// indica si un vector és "capicua"
bool capicua(const vector<double>& v) {
    int n = v.size();
    for (int i = 0; i < n/2; ++i) {
        if (v[i] != v[n - i - 1]) {
            return false;
        }
    }
    return true;
}


// acció que escala un vector per un escalar
void escalar(vector<double>& v, double c) {
    for (int i = 0; i < v.size(); ++i) {
        v[i] *= c;
    }
}


// variació: acció que escala un vector per un escalar
void escalar2(vector<double>& v, double c) {
    for (double& x : v) {
        x *= c;
    }
}


// funció que retorna un vector escalat per un escalar
vector<double> escala(const vector<double>& v, double c) {
    vector<double> v2(v.size());
    for (int i = 0; i < v.size(); ++i) {
        v2[i] = v[i] * c;
    }
    return v2;
}


// programet de proves
int main() {
    int n;
    cin >> n;
    vector<double> v1(n);
    vector<double> v2(n);
    for (int i = 0; i < n; ++i) {
        cin >> v1[i];
    }
    for (int i = 0; i < n; ++i) {
        cin >> v2[i];
    }
    cout << producte_escalar(v1, v2) << endl;
}
