// ordenació amb sort de <algorithm>

#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdlib>
#include <cassert>
using namespace std;



int main() {
    int n;
    cin >> n;
    vector<double> v(n);
    for (double& x : v) x = rand() / double(RAND_MAX);

    sort(v.begin(), v.end());

    for (int i = 0; i < n-1; ++i) {
        assert(v[i] <= v[i+1]);
    }
}
