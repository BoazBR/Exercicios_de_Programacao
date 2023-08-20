var listaDeFrutas = [ "Uva", "Banana",  "Manga", "Cajá", "Pinha"]
var busca = "Cajá"

for(i = 0; i < listaDeFrutas.length; i++){
    if(listaDeFrutas[i] == busca){
        console.log("Sim, temos a fruta " + busca + " disponível")
    }
}