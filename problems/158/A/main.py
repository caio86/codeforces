def solve():
    n, k = map(int, input().split())

    participants = list(map(int, input().split()))

    sum = 0
    for participantScore in participants:
        if participantScore <= 0:
            continue

        if participantScore >= participants[k - 1]:
            sum += 1

    print(sum)


solve()
