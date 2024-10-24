import math


def solve():
    T = int(input())
    for _ in range(T):
        N = int(input())
        squares = sum(map(int, input().split()))
        raizq = math.sqrt(squares) 
        decimais = str(raizq).split(".")[1]
        if decimais == "0":
            print("YES")
        else:
            print("NO")

if __name__ == "__main__":
    solve()
