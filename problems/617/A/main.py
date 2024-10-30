def solve():
    x = int(input())

    qtd = 0

    for i in range(5, 0, -1):
        divisao = x // i

        qtd += divisao
        x = x % i

    print(qtd)


solve()
