// P39057 amb estructura

#include <cmath>
#include <iostream>
#include <cassert>
using namespace std;


void tractament_rectangle() {
    double amplada, alcada;
    cin >> amplada >> alcada;
    cout << amplada * alcada << endl;
}

void tractament_cercle() {
    double radi;
    cin >> radi;
    cout << radi*radi * M_PI;
}

void tractament_forma() {
    string forma;
    cin >> forma;
    // assert(forma == "rectangle" or forma == "cercle");
    if (forma == "rectangle") {
        tractament_rectangle();
    } else if (forma == "cercle") {
        tractament_cercle();
    } else {
        // no hauria de passar mai
        assert(false);
    }
}



int main() {
    cout.setf(ios::fixed);
    cout.precision(6);
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        tractament_forma();
    }
}
