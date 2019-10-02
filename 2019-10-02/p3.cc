// comptar nombre de dígits 3 en un natural => recorregut

#include <iostream>
using namespace std;

int nb_tresos(int n) {
    int tresos = 0;
    while (n != 0) {
        if (n % 10 == 3) {
            ++tresos;
        }
        n /= 10;
    }
    return tresos;
}

int main() {
    int n;
    cin >> n;
    cout << nb_tresos(n) << endl;
}
