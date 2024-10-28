def getOperation(statement):
    if statement[0] == "X":
        return statement.split("X")[1]
    else:
        return statement.split("X")[0]


def solve():
    T = int(input())

    x = 0

    for _ in range(T):
        statement = input()
        operation = getOperation(statement)
        if operation == "++":
            x += 1
        else:
            x -= 1

    print(x)

solve()
