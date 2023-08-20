var familia = ["Joana", "Felipe", "Gabriela", "Carlos", "Pedro", "Bruno"]

for(i = 0; i < familia.length; i++){
    if(familia[i] == "Pedro"){
        console.log(familia[i] + " Sousa")
        continue
    }
    console.log(familia[i] + " Macedo")
}