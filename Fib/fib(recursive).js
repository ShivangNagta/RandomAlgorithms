const fibbo = (fib) => {
  if (fib < 2) return fib
  return fibbo(fib - 1) + fibbo(fib - 2)
}

console.log(fibbo(40))