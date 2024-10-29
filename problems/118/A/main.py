def solve():
    vogais = "aeiouy"
    text = input().lower()

    for char in text:
        if char not in vogais:
            print(f".{char}", end="")


solve()
