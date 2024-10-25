from math import gcd


def solve():
    A, B, N = map(int, input().split())
    # 0 for simon 1 for antisimon
    turn = False

    while True:
        amount = 0
        
        if turn:
            # anti simon
            amount = gcd(B, N)
        else:
            # simon
            amount = gcd(A, N)

        if amount > N:
            print(int(not turn))
            return

        N -= amount

        turn = not turn


if __name__ == "__main__":
    solve()
