var cartela = [8, 13, 18, 22, 42, 49]
var numeroSorteado = 42

for(i = 0; i < cartela.length; i++){
    if(cartela[i] == numeroSorteado){
        console.log("Encontrei o número!")
        break;
    }
}