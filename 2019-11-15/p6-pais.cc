
/* Estructura de dades d'un país. */

struct Municipi {
    string nom;
    int poblacio;       // nombre d'habitants
    double superficie;  // en km^2
};

struct Comarca {
    string nom;
    bool te_mar;
    vector<Municipi> municipis;
    int capital;        // índex de la capital dins de municipis
};

struct Vegueria {
    string nom;
    vector<Comarca> comarques;
};

struct Pais {
    string nom;
    ImatgePNG bandera;  // definit en algun altre lloc
    vector<Vegueria> vegueries;
};

double densitat (const Pais& p) {
    int poblacio = 0;
    double superficie = 0;
    for (Vegueria v : p.vegueries) {
        for (Comarca c : v.comarques) {
            for (Municipi m : c.municipis) {
                poblacio += m.poblacio;
                superficie += m.superficie;
            }
        }
    }
    return poblacio / superficie;
}
