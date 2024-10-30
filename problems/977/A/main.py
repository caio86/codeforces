def solve():
    n, k = input().split()

    k = int(k)

    for _ in range(k):
        if n[-1] == "0":
            n = str(int(n) // 10)
            continue

        n = str(int(n) - 1)

    print(n)


solve()
