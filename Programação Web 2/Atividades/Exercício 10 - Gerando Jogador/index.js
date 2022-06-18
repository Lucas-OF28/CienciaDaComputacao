const express = require('express')
const app = express()
const PORT = 1234
const dados = require('./dados')

app.listen(PORT, function(){
    console.log(`Servidor iniciado na porta ${PORT}`)
})

app.get('/gerador', function(req, res){

    const filtro = req.query.filtro

    var jogador = {
        "nome": dados.nome[Math.floor(Math.random() * dados.nome.length)],
        "sobrenome": dados.sobrenome[Math.floor(Math.random() * dados.sobrenome.length)],
        "idade": Math.floor(Math.random() * (40 - 17 + 1) + 17),
        "posicao": dados.posicao[Math.floor(Math.random() * dados.posicao.length)],
        "clube": dados.clube[Math.floor(Math.random() * dados.clube.length)],
    }

    jogador.mensagem = `${jogador.nome} ${jogador.sobrenome} é um futebolista brasileiro de ${jogador.idade} anos que atua como ${jogador.posicao}. Atualmente defende o ${jogador.clube}.`

    if(filtro == "idade"){
        if(jogador.idade <= 21){
            jogador.idade = "Novato"
        } else {
            if(jogador.idade <= 28){
                jogador.idade = "Profissional"
            } else {
                if(jogador.idade <= 34){
                    jogador.idade = "Veterano"
                } else {
                    jogador.idade = "master"
                }
            }
        }
    }

    res.json(jogador)
})