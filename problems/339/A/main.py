def solve():
    digits = list(map(int, input().split("+")))
    digits = sorted(digits)
    res = "+".join(map(str, digits))
    print(res)


solve()
