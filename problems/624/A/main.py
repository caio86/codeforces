def solve():
    # D luke's width
    # L initial length between presses
    # v1, v2 speed of the presses
    D, L, V1, V2 = map(int, input().split())
    vDiff = V1 - V2
    lukePos = L / 2 + vDiff
    print((lukePos - D))


if __name__ == "__main__":
    solve()
