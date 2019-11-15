
/* Estructura per racionals. */


struct Racional {
    int num;
    int den;
    // Inv: den > 0 i num i den es troben reduïts
};



void reduir(Racional& r) {
    int m = mcd(abs(r.num), r.den);
    r.num /= m;
    r.den /= m;
}


Racional crea(int num, int den) {
    assert(den != 0);
    if (den < 0) {
        den = -den;
        num = -num;
    }
    Racional r = {num, den};
    reduir(r);
    return r;
}


Racional suma(const Racional& a, const Racional& b) {
    Racional r = {a.num*b.den + b.num*a.den, a.den*b.den};
    reduir(r);
    return r;
}


Racional producte(const Racional& a, const Racional& b) {
    Racional r = {a.num*b.num, a.den*b.den};
    reduir(r);
    return r;
}
