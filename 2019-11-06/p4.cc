#include <iostream>
using namespace std;


// diu si n és primer, suposant que n>=2 i que n no té cap divisor en [2..i-1]
bool primer_rec(int n, int i) {
    return i * i > n or (n % i != 0 and primer_rec(n, i + 1));
}


bool primer(int n) {
    return n >= 2 and primer_rec(n, 2);
}


void semiprimer(int n, bool& b, int& p, int& q) {
    for (p = 2; p * p <= n; ++p) {
        if (n % p == 0 and primer(p) and primer(n / p)) {
            b = true;
            q = n / p;
            return;
        }
    }
    b = false;
}


int main() {
    int n;
    while (cin >> n) {
        cout << n << ": ";
        bool b;
        int p, q;
        semiprimer(n, b, p, q);
        if (b) cout << "yes" << " (" << p << "," << q << ")" << endl;
        else cout << "no" << endl;
    }
}
