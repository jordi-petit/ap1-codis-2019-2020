#include <iostream>
using namespace std;

// retorna l'n-èsim nombre de fibonacci, suposant n>=0.
int fibonacci(int n) {
    if (n <= 1) return n;
    else return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;
    cin >> n;
    cout << fibonacci(n) << endl;
}
