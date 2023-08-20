let vetor1 = [5, 8, 2, 9, 3] //cria vetor
vetor1.push(1) //adiciona 1 ao fina do vetor

console.log(`VETOR 1:`)
console.log(vetor1) //exibe vetor

console.log(`O vetor tem ${vetor1.length} posições.`)

console.log(`O primeiro valor do vetor é o ${vetor1[0]}.`)

let pos = vetor1.indexOf(5)

if(pos == -1){
    console.log(`O valor 5 não foi encontrado!`)
} else {
    console.log(`O valor 5 está na posição ${pos}`)
}

console.log(`*---*---*---*---*---*---*---*---*`)

let vetor2 = [8, 1, 7, 4, 2, 9]

console.log(`VETOR 2:`)

for (let pos = 0; pos < vetor2.length; pos++) { //exibe vetor com for
    console.log(`A posição ${pos} tem o valor ${vetor2[pos]}`)    
}

vetor2.sort() //coloca valores do vetor em ordem crescente
console.log(`-------------------`)

for(let pos in vetor2){ //exibe vetor com for simplificado
    console.log(`A posição ${pos} tem o valor ${vetor2[pos]}`)  
}
