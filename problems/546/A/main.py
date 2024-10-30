def solve():
    k, n, w = map(int, input().split())

    sum = 0
    for i in range(1, w + 1):
        sum += i * k

    precisa = sum - n

    if precisa < 0:
        print(0)
    else:
        print(precisa)


solve()
