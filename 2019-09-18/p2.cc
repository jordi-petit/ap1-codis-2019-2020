// calcular el màxim d'N enters

#include <iostream>
using namespace std;

const int N = 10;   // nombre d'elements a llegir (> 0)

int main() {
    int x;
    cin >> x;
    int m = x;
    int i = 1;
    while (i < N) {
        cin >> x;
        if (x > m) m = x;
        ++i;
    }
    cout << m << endl;
}
