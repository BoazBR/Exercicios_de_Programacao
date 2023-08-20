var input = require('fs').readFileSync('C:/Users/Boaz/Pictures/ARQUIVOS IMPORTANTES/javascript/URI/dev/stdin/file.txt', 'utf8');
var lines = input.split('\n');

var num1 = Number(lines.shift())
var num2 = Number(lines.shift())

console.log(`X = ${num1 + num2}`)