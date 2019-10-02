// dir si un natural conté el dígit 3  => cerca (amb booleà, ecs!)

#include <iostream>
using namespace std;

bool hi_ha_tresos(int n) {
    bool trobat3 = false;
    while (n != 0 and not trobat3) {
        if (n % 10 == 3) {
            trobat3 = true;
        } else {        // el else és optatiu
            n /= 10;
        }
    }
    return trobat3;
}

int main() {
    int n;
    cin >> n;
    cout << hi_ha_tresos(n) << endl;
}
