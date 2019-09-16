// llegir una hora en format h m s, incrementar un segon
// i escriure el resultat en format hh:mm:ss

#include <iostream>
using namespace std;

int main() {
    // llegir dades entrada
    int h, m, s;
    cin >> h >> m >> s;

    // calcular el resultat
    s = s + 1;
    if (s == 60) {
        s = 0;
        m = m + 1;
        if (m == 60) {
            m = 0;
            h = h + 1;
            if (h == 24) {
                h = 0;
            }
        }
    }

    // escriure les dades de sortida
    if (h < 10) cout << 0;
    cout << h << ":";
    if (m < 10) cout << 0;
    cout << m << ":";
    if (s < 10) cout << 0;
    cout << s << endl;
}
