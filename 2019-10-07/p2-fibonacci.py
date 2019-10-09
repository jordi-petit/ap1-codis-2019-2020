from jutge import read

def fibonacci(n):
    """retorna l'n-èsim nombre de fibonacci, suposant n>=0 i n enter."""
    if n <= 1:
        return n
    else:
        return fibonacci(n - 1) + fibonacci(n - 2)

def main():
    n = read(int)
    print(fibonacci(n))

main()
