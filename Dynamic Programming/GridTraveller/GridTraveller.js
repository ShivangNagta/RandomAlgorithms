const GridTraveller = (n,m) => 
{
    if (n === 1 && m === 1) return 1
    if (n===0 || m===0) return 0
    return GridTraveller(n-1,m) + GridTraveller(n,m-1)
}

console.log(GridTraveller(1,1)) 
console.log(GridTraveller(2,3))