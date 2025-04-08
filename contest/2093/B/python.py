T = int(input())

for _ in range(T):
    n = input()

    tam = len(n)

    if tam == 0:
        print(0)
        continue

    qtdZero = n.count('0')

    qtd = 0
    for char in n[::-1]:
        # print(char, end=" ")
        if char != '0':
            break
        qtd += 1
    # print()

    print(tam+qtd-qtdZero-1)


