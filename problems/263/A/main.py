def acharN1(linha: list[int]) -> int:
    if 1 not in linha:
        return -1

    for i, v in enumerate(linha):
        if v == 1:
            return i

    return -1


def solve():
    linha = -1
    coluna = -1
    for i in range(5):
        entrada = list(map(int, input().split()))
        coluna = acharN1(entrada)
        if coluna != -1:
            linha = i
            break

    res = abs(linha - 2), abs(coluna - 2)

    print(sum(res))


solve()
