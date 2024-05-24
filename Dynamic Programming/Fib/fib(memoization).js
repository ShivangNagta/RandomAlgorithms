const fibbonaci = (n, memo={}) => 
{
    if (n in memo) return memo[n]
    if (n<=2) return 1
    memo[n] = fibbonaci(n-1, memo) + fibbonaci(n-2, memo)
    return memo[n]
}

console.log(fibbonaci(1000))


// Defining memo globally
// memo ={}

// const fib = (n) => {
//     if(n in memo) return memo[n]
//     if(n<=2) return 1
//     memo[n] = fib(n-1) + fib(n-2)
//     return memo[n]
// }

// console.log(fib(100))