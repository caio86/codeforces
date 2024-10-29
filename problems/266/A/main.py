def solve():
    T = int(input())

    pedras = input()

    anterior = pedras[0]

    qtd = 0
    for i in range(1, T):
        pedra = pedras[i]

        if pedra == anterior:
            qtd += 1
            continue

        anterior = pedra

    print(qtd)


solve()
