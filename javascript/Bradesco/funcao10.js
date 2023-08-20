function calcularIdade(dataDeNascimento) {
    var [dia, mes, ano] = dataDeNascimento.split('/');
    var d = new Date();
    var anoAtual = d.getFullYear();
    var mesAtual = d.getMonth() + 1;
    var diaAtual = d.getDate();

    ano = +ano; mes = +mes; dia = +dia;

    var quantosAnos = anoAtual - ano;

    if (mesAtual < mes || mesAtual == mes && diaAtual < dia) {
        quantosAnos--;
    }

    return quantosAnos < 0 ? 0 : quantosAnos;
 }
  
function deixaEntrar(dataDeNascimento, censura){
    return calcularIdade(dataDeNascimento) >= censura
}