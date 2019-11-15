
/* Ordenació de vectors amb estructures.*/

#include <iostream>
#include <vector>
using namespace std;


struct Data {
    int dia;
    int mes;
    int any;
};


// la funció menor ha de retornar true si a ha d'anar estrictanent abans que b
// en la ordenació
bool menor(const Data& a, const Data& b) {
    if (a.any != b.any) return a.any < b.any;       // camp més discriminador
    if (a.mes != b.mes) return a.mes < b.mes;       // següent camp més discriminador
    return a.dia < b.dia;                           // camp menys discriminador
}


int main() {
    vector<Data> dates = {{30, 11, 1971}, {6, 4, 1971}, {14, 4, 2015}, {17, 11, 2006}};
    sort(dates.begin(), dates.end(), menor);
}
