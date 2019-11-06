from jutge import read

n, b = read(int, int)
print("----------")
while n > 0:
    d = n%b
    n //= b
    print("X" * d)
print("----------")
