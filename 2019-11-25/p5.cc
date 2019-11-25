/* Genera totes les permutacions de les paraules donades. */

#include <iostream>
#include <vector>
using namespace std;


void genera(vector<int>& v, vector<bool>& u, int i, int n, const vector<string>& p) {
    if (i == n) {
        for (int x : v) cout << p[x];
        cout << endl;
    } else {
        for (int j = 0; j < n; ++j) {
            if (not u[j]) {
                v[i] = j;
                u[j] = true;
                genera(v, u, i + 1, n, p);
                u[j] = false;
            }
        }
    }
}


int main() {
    vector<string> p;
    string s;
    while (cin >> s) p.push_back(s);
    int n = p.size();
    vector<int> v(n);
    vector<bool> u(n, false);
    genera(v, u, 0, n, p);
}
