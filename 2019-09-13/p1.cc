// descomposició horària


#include <iostream>
using namespace std;

int main() {
    // llegir dades entrada
    int x;
    cin >> x;   // suposem x >= 0

    // calcular el resultat
    int h = x / 3600;
    int m = (x % 3600) / 60;
    int s = (x % 3600) % 60;

    // escriure les dades de sortida
    cout
        << h << " hores "
        << m << " minuts "
        << s << " segons"
        << endl;
}
