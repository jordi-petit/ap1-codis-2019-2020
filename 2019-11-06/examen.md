
# Problema P62355: Bases i barres

## Possible solució

```python
from jutge import read


def main():
    n, b = read(int, int)
    print("----------")
    while n > 0:
        print("X" * (n%b))
        n //= b
    print("----------")


main()
```

## Errors freqüents

- Solucions massa llargues i complicades.

- Comentaris que repeteixen el que diu el codi.

- Tractament de casos inútils abans o després del bucle
  que es podrien fer dins del bucle.

- Posar parèntesis sobrers al voltant de les condicions de `if`s i `while`s.

- Usar tabuladors.



# Problema P78721: Una paraula mal posada

## Possible solució

```c++
#include <iostream>
#include <string>
using namespace std;


int main() {
    string p;   // primera
    string s;   // segona
    cin >> p;
    while (cin >> s and s != "END") {
        if (p < s) {
            cout << p << endl;
            p = s;
        } else {
            cout << s << endl;
        }
    }
    cout << p << endl;
}
```



# Problema P16818: Subsèrie de Fibonacci

## Possible solució

```c++
#include <iostream>
using namespace std;


int main() {
    int nin; // Per llegir la seqüència d'entrada

    // Dos darrers nombres de Fibonnaci
    int prev_fib = 1;
    int new_fib = 1;

    bool good = true; // Ens indica si tot ha anat be
    while (good and cin >> nin) {
        // Mentre anem per darrera del nombre llegit
        // anem generant la sèrie de Fibonacci
        while (new_fib < nin) {
            int tmp = prev_fib + new_fib;
            prev_fib = new_fib;
            new_fib = tmp;
        }
        // Si ens passem, el nombre no és de Fibonacci
        good = new_fib == nin;
    }

    if (good) cout << "yes" << endl;
    else cout << "no" << endl;
}
```


# Problema P70064:  Nombres semiprimers

## Possible solució
```c++
#include <iostream>
using namespace std;


// diu si n és primer, suposant que n>=2 i que n no té cap divisor en [2..i-1]
bool primer_rec(int n, int i) {
    return i * i > n or (n % i != 0 and primer_rec(n, i + 1));
}


bool primer(int n) {
    return n >= 2 and primer_rec(n, 2);
}


void semiprimer(int n, bool& b, int& p, int& q) {
    for (p = 2; p * p <= n; ++p) {
        if (n % p == 0 and primer(p) and primer(n / p)) {
            q = n / p;
            b = true;
            return;
        }
    }
    b = false;
}


int main() {
    int n;
    while (cin >> n) {
        cout << n << ": ";
        bool b;
        int p, q;
        semiprimer(n, b, p, q);
        if (b) cout << "yes" << " (" << p << "," << q << ")" << endl;
        else cout << "no" << endl;
    }
}
```

## Errors freqüents i possibles millores

- Ignorar els requeriments de l'enunciat i/o les especificacions dels subprogrames:
    - Fer `primer()` iterativament.
    - Canviar la capçalera de `primer()` i/o `semiprimer()`.
    - Ignorar que `b`, `p`, `q` són paràmetres de sortida.
    - Escriure dins de `semiprimer`.

- Fer la cerca amb dos bucles, un per `p` i l'altre per `q`.

- Usar `sqrt()`.

- Declarar les variables abans d'hora.

- Tractar incorrectament els booleans.

