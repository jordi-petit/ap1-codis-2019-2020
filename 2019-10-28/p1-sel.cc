#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdlib>
#include <cassert>
using namespace std;


// retorna la posició amb el valor mínim de v[i..]
// prec: 0 <= i < v.size()
int pos_minim(const vector<double>& v, int i) {
    int m = i;
    for (int j = i+1; j < v.size(); ++j) {
        if (v[j] < v[m]) {
            m = j;
        }
    }
    return m;
}


void ordenacio_per_seleccio(vector<double>& v) {
    int n = v.size();
    for (int i = 0; i < n - 1; ++i) {
        int m = pos_minim(v, i);
        swap(v[i], v[m]);
    }
}


int main() {
    int n;
    cin >> n;
    vector<double> v(n);
    for (double& x : v) x = rand() / double(RAND_MAX);
    ordenacio_per_seleccio(v);
    for (int i = 0; i < n-1; ++i) {
        assert(v[i] <= v[i+1]);
    }
}
