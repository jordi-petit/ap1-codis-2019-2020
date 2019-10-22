
// programa que revessa un vector

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


void revessar(vector<int>& v) {
    int n = v.size();
    for (int i = 0; i < n/2; ++i) {
        swap(v[i], v[n - i - 1]);
    }
}


int main() {
    vector<int> v = {4, 7, 8, 3, 5};
    revessar(v);
    for (int x : v) cout << x << endl;
}
