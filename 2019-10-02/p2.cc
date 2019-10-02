// dir si hi ha alguna a en un text => cerca

#include <iostream>
using namespace std;

int main() {
    bool hi_ha_as = false;

    char c;
    while (cin >> c and not hi_ha_as) {
        if (c == 'A' or c == 'a') {
            hi_ha_as = true;
        }
    }

    if (hi_ha_as) cout << "hi ha as" << endl;
    else cout << "no hi ha as" << endl;
}
