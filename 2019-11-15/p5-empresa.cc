
/* Estructura de dades d'una empresa. */

struct Data {
    int dia;
    int mes;
    int any;
};

struct Treballador {
    string nom;
    Data data_neixement;
    Data data_contractacio;
    bool casat;
    double sou;
};

using Personal = vector<Treballador>;

int main() {
    Data avui = {19, 11, 2018};

    Treballador t1 = {
        "Joan Ploramiques",
        {10, 3, 1990},
        avui,
        false,
        30000
    };

    Treballador t2 = {
        "Anna Ploramolt",
        {29, 2, 1992},
        {1, 11, 2015},
        true,
        35000
    };

    Personal p = {t1, t2};

    // compta quants treballadors casats hi ha
    int nb_casats = 0;
    for (Treballador t : p) {
        if (t.casat) ++nb_casats;
    }

    // dobla el sou dels treballadors
    for (Treballador& t : p) {
        t.sou *= 2;
    }
}
