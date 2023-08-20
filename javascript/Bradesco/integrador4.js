var placas = [
    'RXB-2525', 'AKX-3333', 'ORO-7142','RXB-2525', 'AKX-3333', 'ORO-7142',
    'AKX-3333', 'RXB-2525', 'AKX-3333','AKX-3333', 'RXB-2525', 'AKX-3333',   'RXB-2525', 'AKX-3333', 'ORO-7142','AKX-3333', 'AKX-3333', 'RXB-2525',
    'AKX-3333', 'ORO-7142', 'ORO-7142','AKX-3333', 'AKX-3333', 'RXB-2525',
    'AKX-3333', 'AKX-3333', 'RXB-2525','AKX-3333', 'AKX-3333', 'RXB-2525',
    'AKX-3333', 'ORO-7142', 'ORO-7142','AKX-3333', 'ORO-7142', 'ORO-7142',
    'ORO-7142', 'RXB-2525', 'AKX-3333','AKX-3333', 'ORO-7142', 'ORO-7142',
    'AKX-3333', 'RXB-2525', 'AKX-3333','AKX-3333', 'RXB-2525', 'AKX-3333',
    'RXB-2525', 'AKX-3333', 'ORO-7142','AKX-3333', 'AKX-3333', 'RXB-2525',
    'AKX-3333', 'ORO-7142', 'ORO-7142','AKX-3333', 'AKX-3333', 'RXB-2525',
    'AKX-3333', 'AKX-3333', 'RXB-2525','AKX-3333', 'AKX-3333', 'RXB-2525'
 ]
 
 function calcularNumeroDeEntradas(placa){
    var cont = 0
    for(i = 0; i < placas.length; i++){
        if(placas[i] == placa){
            cont++
        }
    }

    return cont
 }
  
 function calcularValorDevido(placa){
    var cont = calcularNumeroDeEntradas(placa)
    var total = 0

    for(cont; cont > 20; cont--){
        total += 5
    }

    for(cont; cont > 0; cont--){
        total += 10
    }

    return total;
 }