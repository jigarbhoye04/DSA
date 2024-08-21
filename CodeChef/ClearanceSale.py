def total(paid):
    free = paid // 2
    total = paid + free
    return total

X = int(input().strip())
print(total(X))