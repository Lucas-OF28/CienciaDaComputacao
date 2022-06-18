var num = process.argv.slice(2)
var soma = num.reduce(function(valorAnterior, itemAtual){
    if(itemAtual % 2 == 0){
        return valorAnterior + parseInt(itemAtual)
    } else {
        return valorAnterior
    }
}, 0)

console.log(soma)