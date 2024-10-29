def solve():
    name = input()
    distinctChars = []

    for char in name:
        if char not in distinctChars:
            distinctChars.append(char)

    if len(distinctChars) % 2 == 0:
        print("CHAT WITH HER!")
    else:
        print("IGNORE HIM!")

solve()
