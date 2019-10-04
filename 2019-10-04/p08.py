# Rombes

from jutge import read


def repeteix(n, c):
    for i in range(n):
        print(c, end='')        # sense salt de línia


def pinta_fila(n, i):
    repeteix(n - i - 1, ' ')
    repeteix(i*2 + 1, '*')
    print()


def pinta_triangle_superior(n):
    for i in range(n):
        pinta_fila(n, i)


def pinta_triangle_inferior(n):
    for i in range(n - 2, -1, -1):     # el tercer paràmetre és el increment/descrement
        pinta_fila(n, i)


def pinta_rombe(n):
    pinta_triangle_superior(n)
    pinta_triangle_inferior(n)


def main():
    n = read(int)
    pinta_rombe(n)


main()
