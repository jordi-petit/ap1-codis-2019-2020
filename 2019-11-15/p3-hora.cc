
/* Estructura per una hora del dia. */

struct Hora {
    int h, m, s;
    // Invariant de representació:
    //  0 ≤ h < 24, 0 ≤ m < 60, 0 ≤ s < 60
};


void incrementar_un_segon(Hora& h) {
    if (++h.s == 60) {
        h.s = 0;
        if (++h.m == 60) {
            h.m = 0;
            if (++h.h == 24) {
                h.h = 0;
}   }   }   }


Hora un_segon_mes_tard(const Hora& h) {
    Hora h2 = h;
    if (++h2.s == 60) {
        h2.s = 0;
        if (++h2.m == 60) {
            h2.m = 0;
            if (++h2.h == 24) {
                h2.h = 0;
    }   }   }
    return h2;
}


Hora un_segon_mes_tard(Hora h) {
    if (++h.s == 60) {
        h.s = 0;
        if (++h.m == 60) {
            h.m = 0;
            if (++h.h == 24) {
                h.h = 0;
    }   }   }
    return h;
}

