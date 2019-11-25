/* Generar tots els subconjunts de les paraules donades. */


#include <iostream>
#include <vector>
#include <cstring>
using namespace std;


void escriu(vector<int>& v, int n, const vector<string>& p) {
    cout << '{';
    bool primer = true;
    for (int i = 0; i < n; ++i) {
        if (v[i] == 1) {
            if (not primer) cout << ",";
            primer = false;
            cout << p[i];
    }   }
    cout << '}' << endl;
}

// Genera totes les combinacions de n bits
// en v, havent fixat les primeres i posicions de v.
// Enlloc d'escriure els bits, escriu les paraules corresponents.
void genera(vector<int>& v, int i, int n, const vector<string>& p) {
    if (i == n) {
        escriu(v, n, p);
    } else {
        v[i] = 0;
        genera(v, i + 1, n, p);
        v[i] = 1;
        genera(v, i + 1, n, p);
    }
}


int main() {
    vector<string> p;
    string s;
    while (cin >> s) p.push_back(s);
    int n = p.size();
    vector<int> v(n);
    genera(v, 0, n, p);
}
