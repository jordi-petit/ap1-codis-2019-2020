# Escriure les arrels quadrades d'una seqüència de reals amb 6 digíts de precisió

from jutge import read
import math

def main():
    x = read(float)
    while x is not None:
        s = math.sqrt(x)
        print("%.6f" % s)
        x = read(float)

main()
