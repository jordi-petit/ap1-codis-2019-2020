#include <iostream>
#include <vector>
#include <ctime>
using namespace std;

double now() {
    return clock() / double(CLOCKS_PER_SEC);
}

// precondició: el vector v està ordenat creixentment
// retorna -1 si x no és a v o un index i talque v[i]=x.
int posicio(int x, const vector<int>& v) {
    int n = v.size();
    for (int i = 0; i < n; ++i) {
        if (v[i] == x) {
            return i;
        }
        if (v[i] > x) {
            return -1;
        }
    }
    return -1;
}


int main() {
    int n = 400000000;
    vector<int> v(n);
    for (int i = 0; i < n; ++i) v[i] = i;
    int s = 0;
    double t = now();
    s += posicio(n, v);
    t = now() - t;
    cout << t << endl;
    cout << s << endl;
}
