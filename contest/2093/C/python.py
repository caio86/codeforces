from math import sqrt

def checkPrime(n):
    if n <= 1:
        return False

    for i in range(2, int(sqrt(n))+1):
        if n % i == 0:
            return False

    return True

T = int(input())

for _ in range(T):
    x, k =input().split()

    x = int(x)
    k = int(k)

    if k == 1 and checkPrime(x):
        print("YES")
    else:
        print("NO")

