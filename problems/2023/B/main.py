def solve(n):
    for i in range(1, 2 ** n, 2):
        binaryStr = f"{i:0{n}b}"

        customBinaryStr = binaryStr.replace("0", "3").replace("1", "6")

        realNumber = int(customBinaryStr)

        if realNumber % 66 == 0:
            return realNumber

    return -1



T = int(input())

for _ in range(T):
    n = int(input())

    print(solve(n))


