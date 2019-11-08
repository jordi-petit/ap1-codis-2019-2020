#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdlib>
#include <cassert>
using namespace std;


// prec: esq<mig<dre i v[esq..mig] està ordenat i v[mig+1..dre] està ordenat
// postc: v[esq..dre] està ordenat
void fusio(vector<double>& v, int esq, int mig, int dre) {
    vector<double> aux;
    int i = esq;
    int j = mig + 1;
    while (i <= mig and j <= dre) {
        if (v[i] <= v[j]) {
            aux.push_back(v[i]);
            ++i;
        } else {
            aux.push_back(v[j]);
            ++j;
        }
    }
    while (i <= mig) {
        aux.push_back(v[i]);
        ++i;
    }
    while (j <= dre) {
        aux.push_back(v[j]);
        ++j;
    }
    for (int k = 0; k < dre - esq + 1; ++k) {
        v[k + esq] = aux[k];
    }
}


void ordenacio_per_fusio(vector<double>& v, int esq, int dre) {
    if (dre - esq >= 1) {
        int mig = (esq + dre) / 2;
        ordenacio_per_fusio(v, esq, mig);
        // v[esq..mig] està ordenat
        ordenacio_per_fusio(v, mig + 1, dre);
        // v[mig+1..dre] està ordenat
        fusio(v, esq, mig, dre);
        // v[esq..dre] està ordenat
    }
}


void ordenacio_per_fusio(vector<double>& v) {
    ordenacio_per_fusio(v, 0, v.size() - 1);
}


int main() {
    int n;
    cin >> n;
    vector<double> v(n);
    for (double& x : v) x = rand() / double(RAND_MAX);
    ordenacio_per_fusio(v);
    for (int i = 0; i < n-1; ++i) {
        assert(v[i] <= v[i+1]);
    }
}
