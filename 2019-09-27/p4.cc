
#include <iostream>
using namespace std;


// n és paràmetre d'entrada
// h, m, s són paràmetres de sortida
void descomposicio_horaria(int n, int& h, int& m, int& s) {
    h = n / 3600;
    m = (n % 3600) / 60;
    s = n % 60;
}


int main() {
    int n;
    cin >> n;
    int h, m, s;    // no cal inicialitzar
    descomposicio_horaria(n, h, m, s);
    cout << h << ":" << m << ":" << s << endl;
}
