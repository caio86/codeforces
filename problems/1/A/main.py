import math


def solve():
    n, m, a = map(int, input().split())

    needsN = math.ceil(n / a)
    needsM = math.ceil(m / a)

    count = needsN * needsM

    print(count)

solve()
