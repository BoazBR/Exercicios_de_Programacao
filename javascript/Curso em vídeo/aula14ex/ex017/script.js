function verificar(){
    var n = document.getElementById("numero").value
    var res = document.getElementById("tabuada")
    var tabuada = ""
    if(n){
        for(var count = 1; count <= 10; count++){
            linha = `${n} X ${count} = ${n*count}<br>`
            tabuada += linha;
        }
    
        res.innerHTML = `${tabuada}`
    } else {
        alert("Informe um número e tente novamente")
    }
}