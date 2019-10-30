////////////////////////////////////
/// P39308: Divisors en ordre    ///
/// Jordi Cortadella, 28/10/2019 ///
////////////////////////////////////

#include <iostream>

using namespace std;

// Escriu els divisors de n en ordre creixent
// posant un blanc davant de cada divisor.
void escriu_divisors(int n) {

	int d; // Aquesta variable visitira els divisors
	// Trobem els divisors petits
	for (d = 1; d*d < n; ++d) {
		if (n%d == 0) cout << " " << d;
	}

	// Un cas peculiar: que sigui un quadrat perfecte
	// (no hem de repetir el divisor)
	if (d*d == n) cout << " " << d;

	// I ara els divisors grans.
	for (d = d - 1; d > 0; --d) {
		if (n%d == 0) cout << " " << n/d;
	}
}

// Programa que llegeix una sequencia de nombres enters entre
// 1 i 10^9 i escriu els seus divisors.
int main() {
	int n;
	while (cin >> n) {
		cout << "divisors de " << n << ":";
		escriu_divisors(n);
		cout << endl;
	}
}