function calculaGostos(notas){
    var nNaoGostaram = 0, nMediano = 0, nGostaram = 0

    for(i = 0; i < notas.length; i++){
        if(notas[i] <= 1){
            nNaoGostaram++
        } else if(notas[i] <=3){
            nMediano++
        } else {
            nGostaram++
        }
    }

    return [nNaoGostaram, nMediano, nGostaram]
}