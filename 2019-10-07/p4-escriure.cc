// escriu el número n en base b (del dret)
// prec: n ≥ 0, b ≥ 2 i b ≤ 10
// versió 1
void escriure_en_base(int n, int b) {
    if (n < b) {
        cout << n;
    } else {
        escriure_en_base(n/b, b);
        cout << n%b;
    }
}

// escriu el número n en base b (del dret)
// prec: n ≥ 0, b ≥ 2 i b ≤ 10
// versió 2
void escriure_en_base(int n, int b) {
    if (n >= b) escriure_en_base(n/b, b);
    cout << n%b;
}

int main() {
    escriure_en_base(13, 2);
}
