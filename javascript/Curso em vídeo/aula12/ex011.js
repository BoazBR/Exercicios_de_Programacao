var idade = 59
console.log(`Você tem ${idade} anos.`)

if(idade < 16){
    console.log("Você não pode votar!")
} else if(idade < 18 || idade >= 60){
    console.log("Seu voto é opcional!")
} else{
    console.log("Seu voto é obrigatório!")
}