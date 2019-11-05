///////////////////////////////////////////////////////////
/// P37257: Funció per a tres dígits iguals consecutius ///
/// Jordi Cortadella, 28/10/2019                        ///
///////////////////////////////////////////////////////////

#include <iostream>

using namespace std;

// Comprova si el numero n te tres digits consecutius
// iguals en la seva representacio en base b.
bool tres_digits_seguits_iguals(int n, int b) {

	// Cas basic: menys de tres digits
	if (n < b*b) return false;

	// Comprova els tres darrers digits
	// Primer comprova els dos darrers digits
	int d1 = n%b;
	n = n/b; // i eliminem el darrer digit per la crida recursiva
	int d2 = n%b;
	if (d1 != d2) return tres_digits_seguits_iguals(n, b);

	// i ara el tercer digit
	if (d2 != (n/b)%b) return tres_digits_seguits_iguals(n, b);

	// els tres son iguals
	return true;
}

// Programa principal per fer proves: llegeix parelles de
// nombre i base i escriu cert (1) o fals (0) si el nombre te
// tres digits iguals consecutis en la seva representacio
// en la base.
int main() {

	int n, b;
	while (cin >> n >> b) {
		cout << tres_digits_seguits_iguals(n, b) << endl;
	}
}