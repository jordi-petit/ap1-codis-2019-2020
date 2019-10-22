// programa que siu si un text és palindròmic

#include <iostream>
#include <string>
using namespace std;


bool es_palindromic(const string& s) {
    int n = s.size();
    for (int i = 0; i < n/2; ++i) {
        if (s[i] != s[n - i - 1]) {
            return false;
        }
    }
    return true;
}


int main() {
    string s;
    cin >> s;
    cout << es_palindromic(s) << endl;
}
