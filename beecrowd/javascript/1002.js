var input = require('fs').readFileSync('C:/Users/Boaz/Pictures/ARQUIVOS IMPORTANTES/javascript/URI/dev/stdin/file.txt', 'utf8');
var lines = input.split('\n');

var raio = Number(lines.shift());
var pi = 3.14159;
var area = (raio ** raio) * pi;

console.log(`A=${area}`);
