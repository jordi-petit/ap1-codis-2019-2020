// determinar si un nombre és primer

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    bool p = n >= 2;
    int i = 2;
    while (i < n and p) {
        if (n % i == 0) {
            p = false;
        } else {
            ++i;
        }
    }

    if (p) cout << "es primer" << endl;
    else cout << "no es primer" << endl;
}
