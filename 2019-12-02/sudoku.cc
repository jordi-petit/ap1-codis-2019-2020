/* tries to solve a sudoku by constraint propagation. */

#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

using Subset = vector<bool>;
using Sudoku = vector<vector<Subset>>;


// retorna l'element d'un conjunt que només té un element
int unique(const Subset& s) {
    for (int k = 0; k < 9; ++k) {
        if (s[k]) return k;
    }
    assert(false);
}


// retorna el nombre d'elements d'un conjunt
int cardinal(const Subset& s) {
    int c = 0;
    for (int k = 0; k < 9; ++k) {
        if (s[k]) ++c;
    }
    return c;
}


// diu si un conjunt té un sol element (potser no cal...)
bool onlyone(const Subset& s) {
    return cardinal(s) == 1;
}



Sudoku read() {
    Sudoku s(9, vector<Subset>(9, Subset(9, true)));
    for (int i = 0; i < 9; ++i) {
        for (int j = 0; j < 9; ++j) {
            char c;
            cin >> c;
            if (c != '.') {
                s[i][j] = Subset(9, false);
                s[i][j][c - '0' - 1] = true;
            }
        }
    }
    return s;
}


void debug(const Sudoku& s) {
    for (int i = 0; i < 9; ++i) {
        for (int j = 0; j < 9; ++j) {
            cout << "[";
            for (int k = 0; k < 9; ++k) {
                if (s[i][j][k]) cout << k;
                else cout << ".";
            }
            cout << "]";
        }
        cout << endl;
    }
    cout << endl;
}


void print(const Sudoku& s) {
    for (int i = 0; i < 9; ++i) {
        for (int j = 0; j < 9; ++j) {
            cout << unique(s[i][j]) + 1 << " ";
        }
        cout << endl;
    }
}


void propagate_by_row(Sudoku& s, int i, int j) {
    int e = unique(s[i][j]);
    for (int k = 0; k < 9; ++k) {
        if (k != j) {
            s[i][k][e] = false;
        }
    }
}


void propagate_by_col(Sudoku& s, int i, int j) {
    int e = unique(s[i][j]);
    for (int k = 0; k < 9; ++k) {
        if (k != i) {
            s[k][j][e] = false;
        }
    }
}


void propagate_by_box(Sudoku& s, int i, int j) {
    int e = unique(s[i][j]);
    int i1 = (i / 3) * 3;       // fila on comença la caixa de la fila i
    int j1 = (j / 3) * 3;       // columna on comença la caixa de la columna j
    for (int i2 = i1; i2 < i1 + 3; ++i2) {
        for (int j2 = j1; j2 < j1 + 3; ++j2) {
            if (i != i2 or j != j2) {
                s[i2][j2][e] = false;
            }
        }
    }
}


void propagate(Sudoku& s) {
    for (int i = 0; i < 9; ++i) {
        for (int j = 0; j < 9; ++j) {
            if (onlyone(s[i][j])) {
                propagate_by_row(s, i, j);
                propagate_by_col(s, i, j);
                propagate_by_box(s, i, j);
            }
        }
    }
}


void solve(Sudoku& s) {
    Sudoku s2;
    do {
        s2 = s;
        propagate(s);
    } while (s != s2);
}


bool solved(const Sudoku& s) {
   for (int i = 0; i < 9; ++i) {
        for (int j = 0; j < 9; ++j) {
            if (not onlyone(s[i][j])) {
                return false;
            }
        }
    }
    return true;
}


int main() {
    Sudoku s = read();
    debug(s);
    solve(s);
    if (solved(s)) {
        print(s);
    } else {
        debug(s);
        cout << "not solved"<< endl;
    }
}
