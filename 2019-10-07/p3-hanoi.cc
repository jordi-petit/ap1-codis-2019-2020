#include <iostream>
using namespace std;

// Mostra els moviments per moure n discos del piu orígen al piu destí, passant pel piu auxiliar.
// Precondició: n >= 0, els dicos a tots els pius estan ben posats i tots els discos de dst i aux
// són més grans que tots els discos de ori.
void hanoi(int n, int ori, int dst, int aux) {
    if (n > 0) {
        hanoi(n - 1, ori, aux, dst);
        cout << ori << " --> " << dst << endl;
        hanoi(n - 1, aux, dst, ori);
    }
}

int main() {
    int n;
    cin >> n;
    hanoi(n, 1, 2, 3);
}
