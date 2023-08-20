function maxmin(a, b, c, d, e){
    var menorMaior = []

    menorMaior.push(Math.min(a, b, c, d, e))
    menorMaior.push(Math.max(a, b, c, d, e))

    return menorMaior
}

console.log(maxmin(9, 1, 30, 90, 5))