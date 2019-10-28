#include <iostream>
#include <vector>
using namespace std;

// retorna -1 si x no és a v o un index i talque v[i]=x.
int posicio(int x, const vector<int>& v) {
    int n = v.size();
    for (int i = 0; i < n; ++i) {
        if (v[i] == x) {
            return i;
        }
    }
    return -1;
}


int main() {
    vector<int> v = {3, 5, 8, 9, 12, 15};
    cout << posicio(9, v) << endl;
}
