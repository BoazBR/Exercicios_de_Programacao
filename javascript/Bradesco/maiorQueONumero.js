function maiorQueNum(array, num){
    var resposta = []
    for(i = 0; i < array.length; i++){
        if(array[i] > num){
            resposta.push(array[i])
        }
    }

    return resposta;
}