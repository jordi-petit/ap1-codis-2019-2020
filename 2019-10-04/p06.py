# Sumar un segon 

from jutge import read

h, m, s = read(int, int, int)

s = s + 1
if s == 60:
    s = 0
    m = m + 1
    if m == 60:
        m = 0
        h = h + 1
        if h == 24:
            h = 0

print(h, m, s)  # Al problema P34279 cal una sortida més "bonica"
