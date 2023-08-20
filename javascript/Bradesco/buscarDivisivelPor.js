function buscarDivisivelPor(array, num){
    for(i = 1; i < array.length; i++){
        if(array[i] % num == 0){
            return array[i]
        }
    }

    return "Nenhum número válido encontrado!"
}

var array = [0, 9, 4, 7, 128, 42, -1, 301, -5]
var num = 2
console.log(buscarDivisivelPor(array, num))