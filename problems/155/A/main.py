N = int(input())
points = list(map(int, input().split()))
greater = points[0]
lesser = points[0]

coolPerfm = 0

for i in range(1, N):
    point = points[i]
    if point > greater:
        greater = point
        coolPerfm += 1

    if point < lesser:
        lesser = point
        coolPerfm += 1

print(coolPerfm)

