// calcular el màxim d'n enters, el valor d'n es dóna primer

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;   // assumim n > 0

    int x;
    cin >> x;
    int m = x;
    int i = 1;
    while (i < n) {
        cin >> x;
        if (x > m) m = x;
        ++i;
    }
    cout << m << endl;
}
