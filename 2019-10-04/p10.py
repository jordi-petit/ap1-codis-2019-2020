# Rellotge


import time


def escriure_num(x):
    if x < 10:
        print(0, end='')
    print(x, end='')


def escriure_hora(h, m, s):
    escriure_num(h)
    print(':', end='')
    escriure_num(m)
    print(':', end='')
    escriure_num(s)
    print()


# Malgrat que en Python tots els paràmetres es passen per referència,
# els enters són immutables. Per tant, haurem d'usar una funció enlloc
# d'una acció.

def sumar_un_segon(h, m, s):
    s = s + 1
    if s == 60:
        s = 0
        m = m + 1
        if m == 60:
            m = 0
            h = h + 1
            if h == 24:
                h = 0
    return h, m, s


def main():
    hores, mins, segs = 23, 59, 55
    while True:
        escriure_hora(hores, mins, segs)
        hores, mins, segs = sumar_un_segon(hores, mins, segs)
        time.sleep(1)


main()
