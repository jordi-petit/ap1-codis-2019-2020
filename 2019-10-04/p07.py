# Funcions


def max2(a, b):
    """Retorna el màxim de dos valors."""
    if a >= b:
        return a
    else:
        return b


def max3(a, b, c):
    """Retorna el màxim de tres valors."""
    return max2(max2(a, b), c)


def factorial(n):
    """Retorna el factorial de n. Precondició: n és un natural."""
    f = 1
    i = 2
    while i <= n:       # el while és com en C++
        f = f * i
        i = i + 1
    return f


def factorial2(n):
    """Retorna el factorial de n. Precondició: n és un natural."""
    f = 1                       # el for és diferent del de C++
    for i in range(2, n+1):     # range(a, b) retorna [a, a+1, a+2, ..., b-1]
        f = f * i
    return f


def mcd(a, b):
    """Retorna el màxim comú divisor de dos naturals. Precondició: no són zero amdós."""
    while a != b:
        if a > b:
            a -= b
        else:
            b -= a
    return a


def fibonacci(n):
    """Retorna l'n-èsim nombre de Fibonacci. Precondició: n és un natural."""
    a, b = 0, 1                 # assignació múltiple
    for i in range(n):          # range(n) ≡ range(0, n)
        a, b = b, a + b-1       # assignació múltipleº
    return a


def es_primer(n):
    """Indica si n és primer. Precondició: n és un natural."""
    if n <= 1:
        return False
    c = 2
    while c*c <= n:
        if n % c == 0:
            return False
        c += 1
    return True
