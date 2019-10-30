#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdlib>
#include <cassert>
using namespace std;


void insereix(vector<double>& v, int i) {
    int j = i - 1;
    double x = v[i];
    while (j >= 0 and v[j] > x) {
        v[j+1] = v[j];
        --j;
    }
    v[j + 1] = x;
}


void ordenacio_per_insercio(vector<double>& v) {
    int n = v.size();
    for (int i = 1; i < n; ++i) {
        insereix(v, i);
    }
}


int main() {
    int n;
    cin >> n;
    vector<double> v(n);
    for (double& x : v) x = rand() / double(RAND_MAX);
    ordenacio_per_insercio(v);
    for (int i = 0; i < n-1; ++i) {
        assert(v[i] <= v[i+1]);
    }
}
