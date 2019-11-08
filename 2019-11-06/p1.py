from jutge import read


def main():
    n, b = read(int, int)
    print("----------")
    while n > 0:
        print("X" * (n%b))
        n //= b
    print("----------")

    
main()
