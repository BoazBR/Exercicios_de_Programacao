function verificar(){
    var inicio = document.getElementById("inicio")
    var fim = document.getElementById("fim")
    var passo = document.getElementById("passo")

    var contagem = document.getElementById("contagem")

    if(inicio.value.length > 0){
        if(fim.value.length){
            if(passo.value >= 1){

                var i = Number(inicio.value)
                var f = Number(fim.value)
                var p = Number(passo.value)

                contagem.innerHTML = `Contando: `

                if(i < f){
                    for(let c = i; c <= f; c += p){
                        contagem.innerHTML += `${c} \u{1F449} `
                    }
                } else {
                    for(let c = i; c >= f; c -= p){
                        contagem.innerHTML += `${c} \u{1F449} `
                    }
                }

                contagem.innerHTML += `\u{1f3c1}`

            } else {
                alert('[ERRO] Preencha o campo "Passo" com um número válido!')
            }
        } else {
            alert('[ERRO] Preencha o campo "Fim"')
        }
    } else {
        alert('[ERRO] Preencha o campo "Início"')
    }
}
