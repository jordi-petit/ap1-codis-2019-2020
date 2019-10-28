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
    int esq = 0;
    int dre = n - 1;
    while (esq <= dre) {
        int mig = (esq + dre) / 2;
        if (v[mig] == x) {
            return mig;
        } else if (v[mig] > x) {
            dre = mig - 1;
        } else {
            esq = mig + 1;
        }
    }
    return -1;
}



int main() {
    int n = 400000000;
    vector<int> v(n);

    int s = 0;
    double t = now();
    s += posicio(n, v);
    t = now() - t;
    cout << t << endl;
    cout << s << endl;
}
