T = int(input())


for _ in range(T):
    n, m, r, c = map(int, input().split())

    linhas = n -r
    res = (linhas*m)+(m-c)+(linhas*(m-1))
    print(res)
