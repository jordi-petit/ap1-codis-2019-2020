// comptar nombre de As en un text => recorregut

#include <iostream>
using namespace std;

int main() {
    int as = 0;
    char c;
    while (cin >> c) {
        if (c == 'a' or c == 'A') {
            ++as;
        }
    }
    cout << as << endl;
}
