function filme(personagens, filmes, lancamentos, id){
    if(id > 0 && id <= filme.length){
        return(personagens[id - 1] + " é um personagem do filme " + filmes[id - 1] + " que estreou no cinema em " + lancamentos[id - 1] + ".")
    } else {
        return "Essa não é uma opção válida."
    }
}

personagens = ["Hermione", "Trinity", "Leia"]
filmes = ["Harry Potter", "Matrix", "Star wars"]
lancamentos = [2001, 1999, 1977]
id = 3