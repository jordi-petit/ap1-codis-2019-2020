// Mínim i màxim de vectors


#include <iostream>
#include <vector>
using namespace std;


// Retorna l'element mínim d'un vector v d'n elements (n>0) amb n-1 comparacions.
int minim(const vector<int>& v) {
    int n = v.size();
    int m = v[0];
    for (int i = 1; i < n; ++i) {
        if (v[i] < m) {
            m = v[i];
        }
    }
}


// Retorna l'element màxim d'un vector v d'n elements (n>0) amb n-1 comparacions.
int maxim(const vector<int>& v) {
    int n = v.size();
    int m = v[0];
    for (int i = 1; i < n; ++i) {
        if (v[i] > m) {
            m = v[i];
        }
    }
}


// Calcula els elements màxim i mínim d'un vector v d'n elements (n>0) amb 2n-2 comparacions.
void minmax(const vector<int>& v, int min&, int& max) {
    min = minim(v);
    max = maxim(v);
}


// Calcula els elements màxim i mínim d'un vector v d'n elements
// (n>0 i n senar) amb 3n/2 comparacions.
// [Arregleu per n parell!]s
void minmax2(const vector<double>& v, int& min, int& max) {
    int n = v.size();
    min = max = v[0];
    for (int i = 1; i < n; i += 2) {
        if (v[i] < v[i + 1]) {
            if (v[i    ] < min) min = v[i    ];
            if (v[i + 1] > max) max = v[i + 1];
        } else {
            if (v[i    ] > max) max = v[i    ];
            if (v[i + 1] < min) min = v[i + 1];
        }
    }
}


