var num1 = document.querySelector("#num1")
var num2 = document.querySelector("#num2")
var num3 = document.querySelector("#num3")
var num4 = document.querySelector("#num4")
var num5 = document.querySelector("#num5")
var num6 = document.querySelector("#num6")

var bCompra = document.querySelector("#compra")
var bSorteio = document.querySelector("#sorteio")

var ticketsComprados = []

function comprarTicket(){
    var ticket = [
        num1.value,
        num2.value,
        num3.value,
        num4.value,
        num5.value,
        num6.value,
    ]
    ticketsComprados.push(ticket)
    console.log(ticketsComprados)
}
function ganhador(){
    //var numeroSorteado = gerarSorteio()
    var numeroSorteado = ["1", "2", "3", "4", "5", "6"]
    var Ganhadores = 0

    for (var ticket of ticketsComprados){
        var ganhou = true
        for (var i = 0; i < 6; i++){
            if (ticket[i] != numeroSorteado[i]){
                ganhou = false
            }
        }

        if (ganhou){
            Ganhadores++
        }
    }
    console.log("Número de ganhadores é: " + Ganhadores)
}
function gerarSorteio(){
    var numSorteados = []

    for(var i = 0; i < 6; i++){

        var numero = 0
        while(numero == 0){
            var numero = Math.floor(Math.random() * 61)
            for(var ns of numSorteados){
                if(ns == numero){
                    numero = 0
                }
            }
        }
        numSorteados.push(numero)
    }
    console.log(numSorteados)
    return numSorteados
}

bCompra.addEventListener('click', comprarTicket)
bSorteio.addEventListener('click', ganhador)