
#include <iostream>
using namespace std;


// acció iterativa
void pinta_fila(int n) {
    for (int i = 0; i < n; ++i) {
        cout << "*";
    }
    cout << endl;
}


// acció iterarecursivativa
void pinta_rectangle(int m, int n) {
    if (m > 0) {
        pinta_rectangle(m - 1, n);
        pinta_fila(n);
    }
}


int main() {
    int m, n;
    cin >> m >> n;
    pinta_rectangle(m , n);
}
