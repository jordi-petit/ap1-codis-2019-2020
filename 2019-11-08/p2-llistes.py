
# retorna la mitjana dels elements de la llista L (no buida!)
def mitjana(L):
    s = 0
    for x in L:
        s += x
    return s / len(L)


# escala els elements del vector c (i toca c per veure què passa)
def escalar(v, c):
    for i in range(len(v)):
        v[i] *= c
    c = 9


def main():
    x = [1, 2, 3]
    cc = 2
    escalar(x, cc)
    print(x, cc)


main()
