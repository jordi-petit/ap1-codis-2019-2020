/////////////////////////////////////
/// P68777: Patro recursiu       ///
/// Jordi Cortadella, 28/10/2019 ///
////////////////////////////////////

#include <iostream>

using namespace std;

// Escriu el patro corresponent a lletra
// segons l'enunciat del problema.
void patro(char lletra) {
	int n = lletra - 'a'; // Nombre de repeticions
	cout << lletra;
	// Repetim [patro lletra] n vegades, on el patro es
	// genera amb la lletra inferior.
	for (int i = 0; i < n; ++i) {
		patro(lletra-1);
		cout << lletra;
	}
}

// Programa principal que llegeix una lletra i escriu el patro
// corresponent segons l'enunciat del problema.
int main() {
	char c;
	cin >> c;
	patro(c);
	cout << endl;
}