#include <iostream>
using namespace std;

// retorna n!, suposant n>=0.
int factorial(int n) {
    if (n == 0) return 1;
    else return n * factorial(n - 1);
}

int main() {
    int n;
    cin >> n;
    cout << factorial(n) << endl;
}
