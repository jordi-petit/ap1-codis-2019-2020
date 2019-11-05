"""
P87198: Octagons facilets
Jordi Cortadella, 26/10/2019
"""

from jutge import read


def octagon(n):
    '''Escriu un octagon de mida n segons el patro descrit
    a l'enunciat del problema'''

    # Part superior: n-1 files
    blancs, numX = n-1, n
    for i in range(n-1):
        print(' '*(blancs-1), 'X'*numX)  # Tambe es podria fer amb bucles
        blancs, numX = blancs - 1, numX + 2

    # Rectangle del mig: n files
    for i in range(n):
        print('X'*numX)

    # Part inferior: n - 1 files
    blancs, numX = 1, numX - 2
    for i in range(n-1):
        print(' '*(blancs-1), 'X'*numX)  # Tambe es podria fer amb bucles
        blancs, numX = blancs + 1, numX - 2

    print()  # Linia del final


def main():
    '''Llegeix una sequencia de naturals n >= 2 i escriu
    els octagons segons l'especificacio del problema'''
    n = read(int)
    while n is not None:
        octagon(n)
        n = read(int)


main()
