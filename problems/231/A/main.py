def solve():
    T = int(input())

    qtdProblemsWillImplement = 0
    for _ in range(T):
        problemSolutions = list(map(int, input().split()))

        if sum(problemSolutions) >= 2:
            qtdProblemsWillImplement += 1

    print(qtdProblemsWillImplement)

solve()

