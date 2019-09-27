
#include <iostream>
using namespace std;

// intercanvia el valor dels dos paràmetres
void swap(int& x, int& y) {     // ! pas referència
    int z = x;
    x = y;
    y = z;
 }

int main() {
    int a, b;
    cin >> a >> b;
    swap(a, b);
    cout << a << " " << b << endl;
}
