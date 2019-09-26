#include <iostream>
using namespace std;


int maxim2(int x, int y) {
    if (x > y) return x;
    /* else */ return y;
}


int maxim3(int x, int y, int z) {
    return maxim2(x, maxim2(y, z));
}


int maxim4(int x, int y, int z, int w) {
    return maxim2(maxim2(x, y), maxim2(z, w));
}


// funció que, donat un natural n, retorna el seu factorial (n!).
int factorial(int n) {
    int f = 1;
    for (int i = 2; i <= n; ++i) {
        f *= i;
    }
    return f;
}


// funció que, donats dos naturals n i m amb n >= m, retorna C^n_m
int nombre_combinatori(int n, int m) {
    return factorial(n) / (factorial(m) * factorial(n - m));
}


// funció que, donat un natural n, indica si n és primer o no
bool es_primer(int n) {
    if (n <= 1) return false;
    int i = 2;
    while (i*i <= n) {  // equival a i <= arrel(n)
        if (n % i == 0) return false;
        ++i;
    }
    return true;
}


// funció que, donat un natural n, indica si n és primer o no
bool es_primer2(int n) {
    if (n <= 1) return false;
    for (int i = 2; i*i <= n; ++i) {
        if (n % i == 0) return false;
    }
    return true;
}


// funció que, donat un natural n, retorna el seu factorial (n!).
// recursiva!
int fact(int n) {
    if (n == 0) return 1;
    return n * fact(n - 1);
}


int main() {
    int n;
    cin >> n;
    cout << es_primer(n) << endl;
}
