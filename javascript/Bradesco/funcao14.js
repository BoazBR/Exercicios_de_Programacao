function gerarDezenas(){
    var dezenas = []

    for(i = 0; i < 6; i++){
        dezenas.push(Math.round(Math.random() * 60))
    }

    return dezenas;
}