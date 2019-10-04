# Descomposició horària

from jutge import read

n = read(int)               # Lectura de l'entrada

h = n // 3600               # Càlcul del nombre d'hores
m = (n % 3600) // 60        # Càlcul del nombre de minuts
s = n % 60                  # Càlcul del nombre de segons

print(h, m, s)              # Escriptura de les sortides
