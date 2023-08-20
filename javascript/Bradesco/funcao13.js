function transformaParaMaiusculo(palavras){
    var palavrasMaiusculo = []

    for(i = 0; i < palavras.length; i++){
        palavrasMaiusculo.push(palavras[i].toUpperCase())
    }

    return palavrasMaiusculo;
}