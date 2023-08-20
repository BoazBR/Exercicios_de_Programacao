function verificar(){
    var data = new Date()
    var ano = data.getFullYear()
    var fAno = document.getElementById('txtano')
    var res = document.querySelector("div#res")

    if(fAno.value.length == 0 || Number(fAno.value) > ano){
        window.alert('[ERRO] Verifique os dados e tente novamente!')

    } else {
        var fSex = document.getElementsByName('radsex')
        var idade = ano - Number(fAno.value)
        var genero = ''
        var img = document.createElement('img')
        img.setAttribute('id', 'foto')

        if(fSex[0].checked){
            genero = 'homem'
            if(idade >= 0 && idade < 10){
                img.setAttribute('src', 'imgs/menino.png')
            } else if(idade < 21) {
                img.setAttribute('src', 'imgs/rapaz.png')
            } else if(idade < 50) {
                img.setAttribute('src', 'imgs/homem.png')
            } else {
                img.setAttribute('src', 'imgs/velho.png')
            }

        } else {
            genero = 'mulher'
            if(idade >= 0 && idade < 10){
                img.setAttribute('src', 'imgs/menina.png')
            } else if(idade < 21) {
                img.setAttribute('src', 'imgs/moça.png')
            } else if(idade < 50) {
                img.setAttribute('src', 'imgs/mulher.png')
            } else {
                img.setAttribute('src', 'imgs/velha.png')
            }
        }
        res.style.textAlign = 'center'
        res.innerHTML = `Usuário(a) ${genero}, com ${idade} anos de idade!`
        res.appendChild(img)
    }

}