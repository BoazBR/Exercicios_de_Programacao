function maisBaratosQue(valor, precos) {
    return precos.filter(p => p <= valor);
}
  
function maisCarosQue(valor, precos){
    return precos.filter(p => p >= valor);
}

function precosEntre(valorMenor, valorMaior, precos){
    var entre = maisBaratosQue(valorMaior, precos)
    entre = maisCarosQue(valorMenor, entre)
    return entre;
}


var precos = [10, 20, 50, 5, 0, 17, 72, 9]

console.log(precosEntre(8, 40, precos))