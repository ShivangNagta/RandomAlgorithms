memo = {}
def FibMemo(n):
    if n in memo : return memo[n]
    if n<=2:
        return 1
    memo[n] = FibMemo(n-1) + FibMemo(n-2)
    return memo[n]

print(FibMemo(100))
    