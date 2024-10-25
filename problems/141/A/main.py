def calculateLetters(qtdLetters, word):
    for letter in word:
        if letter in qtdLetters:
            qtdLetters[letter] += 1
        else:
            qtdLetters[letter] = 1

def solve():
    guest = input()
    host = input()
    pile = input()

    lettersNeeded: dict[str, int] = {}
    got: dict[str, int] = {}

    calculateLetters(lettersNeeded, guest)
    calculateLetters(lettersNeeded, host)

    calculateLetters(got, pile)

    if len(got) != len(lettersNeeded):
        print("NO")
        return

    for key, value in got.items():
        try:
            if value != lettersNeeded[key]:
                print("NO")
                return
        except Exception:
            print("NO")
            return

    print("YES")

if __name__ == "__main__":
    solve()
