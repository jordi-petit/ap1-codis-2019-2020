/* Programa que calcula el màxim de dos enters */

#include <iostream>
using namespace std;

int main() {
    // lectura de les dades
    int a, b;
    cin >> a >> b;

    // càlcul del resultat
    int max;
    if (a > b) {        // també podria ser >=
        max = a;
    } else {
        max = b;
    }

    // escriptura del resultat
    cout << max << endl;
}
