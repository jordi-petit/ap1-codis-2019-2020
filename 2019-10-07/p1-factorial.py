from jutge import read

def factorial(n):
    """retorna n!, suposant n>=0 i n enter."""
    if n == 0:
        return 1
    else:
        return n * factorial(n - 1)

def main():
    n = read(int)
    print(factorial(n))

main()
