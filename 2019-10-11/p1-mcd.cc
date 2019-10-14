#include <iostream>
using namespace std;


// retorna el màxim comú dividor de dos naturals (tots dos no poden ser zero)
int mcd(int a, int b) {
    if (b == 0) return a;
    else return mcd(b, a % b);
}


int main() {
    int a, b;
    cin >> a >> b;
    cout << mcd(a, b) << endl;
}
