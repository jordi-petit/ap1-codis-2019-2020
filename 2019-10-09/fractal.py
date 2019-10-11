
# pinta un bonic floc de neu de koch

import jutge
import turtle


def triangle_koch(n, llargada):
    if n == 0:
        turtle.forward(llargada*3)
    else:
        triangle_koch(n-1, llargada/3.0)
        turtle.left(60)
        triangle_koch(n-1, llargada/3.0)
        turtle.right(120)
        triangle_koch(n-1, llargada/3.0)
        turtle.left(60)
        triangle_koch(n-1, llargada/3.0)


def floc_koch2(n, llargada):
    for i in range(3):
        triangle_koch(n, llargada)
        turtle.right(120)


def main():
    turtle.penup()
    turtle.backward(150)
    turtle.pendown()
    n = jutge.read(int)
    floc_koch2(n, 100)
    jutge.read(chr) # espera per tancar la pantalla


main()
