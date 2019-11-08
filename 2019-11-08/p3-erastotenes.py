# garbell d'eratostenes


from jutge import read


# donat un natural n, retorna un vector p[0..n] on cada p[i] indica si i és o no primer.
def primers(n):
    p = [True for i in range(n+1)]
    p[0] = False
    p[1] = False
    i = 2
    while i * i <= n:
        if p[i]:
            for j in range(i + i, n + 1, i):
                p[j] = False
        i += 1
    return p


# donat un natural n, retorna una llista amb tots els primers <= n.
def primers_primers(n):
    p = primers(n)
    ps = []
    for i in range(n+1):
        if p[i]:
            ps.append(i)
    return ps


def main1():
    n = read(int)
    print(primers(n))


def main2():
    n = read(int)
    print(primers_primers(n))


