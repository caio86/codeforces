T = int(input())

for _ in range(T):
    word = input()
    if (len(word) > 10):
        firstLetter = word[0]
        lastLetter = word[-1]
        print(f"{firstLetter}{len(word)-2}{lastLetter}")
    else:
        print(word)
