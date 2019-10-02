// dir si un natural conté el dígit 3  => cerca (sense booleà)

#include <iostream>
using namespace std;

bool hi_ha_tresos(int n) {
    while (n != 0) {
        if (n % 10 == 3) {
            return true;
        }
        n /= 10;
    }
    return false;
}

int main() {
    int n;
    cin >> n;
    cout << hi_ha_tresos(n) << endl;
}
