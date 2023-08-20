function carregar(){
    var msg = window.document.getElementById("msg")
    var img = window.document.getElementById("imagem")
    var data = new Date()
    var hora = data.getHours()
    var minuto = data.getMinutes()
    msg.innerHTML = `Agora são ${hora} horas e ${minuto} minutos.`

    if(hora >= 0 && hora < 12){             //Bom dia!
        img.src = "imgs/manha.png"
        document.body.style.background = "#E6CE37"

    } else if(hora >= 12 && hora < 18){     //Boa tarde
        img.src = "imgs/tarde.png"
        document.body.style.background = "#F2A250"

    } else {                                //boa noite
        img.src = "imgs/noite.png"
        document.body.style.background = "#614CD9"
    }
}