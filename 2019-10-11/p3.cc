// P39057 sense estructura

#include <cmath>
#include <iostream>
using namespace std;


int main() {
    cout.setf(ios::fixed);
    cout.precision(6);
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        string forma;
        cin >> forma;
        if (forma == "rectangle") {
            double amplada, alcada;
            cin >> amplada >> alcada;
            cout << amplada * alcada << endl;
        } else {
            double radi;
            cin >> radi;
            cout << radi*radi * M_PI;
        }
    }
}
