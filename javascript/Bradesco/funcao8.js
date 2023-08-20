function comecaComMaiuscula(palavra){
    return /^[A-Z]/.test(palavra)
}

var palavras = ["Amor", "copo", "Bolacha", "biscoito"];
 
for(var i=0; i<palavras.length; i++){
    if(comecaComMaiuscula(palavras[i])){
        console.log("Começa com maiúscula")
    } else {
        console.log("Não começa com maiúscula")
    }
}