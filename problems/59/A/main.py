MAIUSCULAS = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
MINUSCULAS = "abcdefghijklmnopqrstuvwxyz"


def solve():
    palavra = input()

    menor = 0
    maior = 0

    for char in palavra:
        if char in MAIUSCULAS:
            maior += 1
        else:
            menor += 1

    if maior > menor:
        print(palavra.upper())
    else:
        print(palavra.lower())


solve()
