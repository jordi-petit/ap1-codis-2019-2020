
#include <iostream>
using namespace std;


// escriu una línia amb n asteríscos
void pinta_fila(int n) {
    for (int i = 0; i < n; ++i) {
        cout << "*";
    }
    cout << endl;
}


// escriu un rectangle amb m files i n columes d'asteríscos
void pinta_rectangle(int m, int n) {
    for (int i = 0; i < m; ++i) {
        pinta_fila(n);
    }
}


// escriu un triangle d'asteríscos de mida n
void pinta_triangle(int n) {
    for (int i = 0; i < n; ++i) {
        pinta_fila(i + 1);
    }
}


// proves
int main() {
    int m, n;
    cin >> m >> n;
    pinta_rectangle(m , n);
}
