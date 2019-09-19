// calcular el factorial d'un nombre

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int f = 1;
    while (n > 1) {
        f = f * n;
        --n;
    }

    cout << f << endl;
}
