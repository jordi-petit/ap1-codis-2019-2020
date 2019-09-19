// calcular potències (x^y)

#include <iostream>
using namespace std;

int main() {
    int x, y;
    cin >> x >> y;

    // suposem y >= 0

    int p = 1;
    int i = 0;
    while (i < y) {
        p = p * x;
        ++i;
    }

    cout << p << endl;
}
