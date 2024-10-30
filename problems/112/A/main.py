def solve():
    word1 = input().lower()
    word2 = input().lower()

    for i in range(len(word1)):
        if word1[i] == word2[i]:
            continue

        ordChar1 = ord(word1[i])
        ordChar2 = ord(word2[i])

        if ordChar1 < ordChar2:
            print(-1)
        else:
            print(1)

        return

    print(0)


solve()
