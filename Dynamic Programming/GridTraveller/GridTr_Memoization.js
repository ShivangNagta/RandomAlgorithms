function GridTrMemo(n, m, memo={}) 
{
    if ([n,m] in memo) return memo[[n,m]]
    if (n === 1 && m === 1) return 1
    if (n===0 || m===0) return 0
    memo[[n,m]] = GridTrMemo(n-1,m, memo) + GridTrMemo(n,m-1, memo)
    return memo[[n,m]]
}

console.log(GridTrMemo(40,40))