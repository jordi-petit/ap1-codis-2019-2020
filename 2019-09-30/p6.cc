/* Programa que compta ternes pitagòriques en una seqüència de naturals. */

#include <iostream>
using namespace std;


// sqr(x) retorna x^2
int sqr(int x) {
    return x * x;
}


// indica si a i b i c formen una terna pitagòrica
bool es_terna_pitagorica(int a, int b, int c) {
    return sqr(a) + sqr(b) == sqr(c);
}


int main() {
    int r = 0;
    int a, b, c;
    if (cin >> a >> b) {
        while (cin >> c) {
            if (es_terna_pitagorica(a, b, c)) ++r;
            a = b;
            b = c;
        }
    }
    cout << r << endl;
}
