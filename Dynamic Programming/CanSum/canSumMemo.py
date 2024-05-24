def canSumMemo(targetSum, numbers, memo={}):
    if targetSum in memo:
        return memo[targetSum]
    if targetSum == 0:
        return True
    if targetSum < 0:
        return False
    for num in numbers:
        targetSum-=num
        if canSumMemo(targetSum,numbers,memo) == True:
            memo[targetSum] = True
            return True
    memo[targetSum] = False
    return False

print(canSumMemo(300,[7,5]))