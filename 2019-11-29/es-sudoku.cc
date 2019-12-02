/* Programa per mirar si diversos sudokus són correctes o no. */

#include <iostream>
#include <vector>

using namespace std;


// Un sudoku serà una matriu de 9x9 enters
using Sudoku = vector<vector<int>>;


Sudoku llegir_sudoku() {
    Sudoku s(9, vector<int>(9));
    for (int i = 0; i < 9; ++i) {
        for (int j = 0; j < 9; ++j) {
            cin >> s[i][j];
        }
    }
    return s;
}


// diu si un vector de 9 posicions conté una permutació de [1..9]
bool es_correcte_9(const vector<int>& v) {
    vector<bool> vist(10, false); // la primera posició no s'utilitza
    for (int i = 0; i < 9; ++i) {
        int val = v[i];
        if (val < 1 or val > 9 or vist[val]) return false;
        vist[val] = true;
    }
    return true;
}


bool es_correcte_columna(const Sudoku& s, int col) {
    vector<int> v(9);
    for (int i = 0; i < 9; ++i) {
        v[i] = s[i][col];
    }
    return es_correcte_9(v);
}



bool es_correcte_caixa(const Sudoku& s, int ci, int cj) {
    vector<int> v;
    for (int i = ci * 3; i < (ci + 1) * 3; ++i) {
        for (int j = cj * 3; j < (cj + 1) * 3; ++j) {
            v.push_back(s[i][j]);
        }
    }
    return es_correcte_9(v);
}


bool es_correcte_per_files(const Sudoku& s) {
    for (int i = 0; i < 9; ++i) {
        if (not es_correcte_9(s[i])) {
            return false;
        }
    }
    return true;
}


bool es_correcte_per_columnes(const Sudoku& s) {
    for (int i = 0; i < 9; ++i) {
        if (not es_correcte_columna(s, i)) {
            return false;
        }
    }
    return true;
}


bool es_correcte_per_caixes(const Sudoku& s) {
    for (int ci = 0; ci < 3; ++ci) {
        for (int cj = 0; cj < 3; ++cj) {
            if (not es_correcte_caixa(s, ci, cj)) {
                return false;
            }
        }
    }
    return true;
}


bool es_correcte_sudoku(const Sudoku& s) {
    return es_correcte_per_files(s)
        and es_correcte_per_columnes(s)
        and es_correcte_per_caixes(s);
}


int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        Sudoku s = llegir_sudoku();
        cout << (es_correcte_sudoku(s) ? "si" : "no") << endl;
    }
}
