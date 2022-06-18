var request = require('request')
var fs = require('fs')
var num = process.argv.splice(2)

//1
for(var numero of num){
    if(numero < 1 || numero >893){
        console.error('Inválido')
        process.exit(1)
    }
}

//2
var pokemons = []
var URL = 'https://pokeapi.co/api/v2/pokemon/'
for (var numero of num){
    request(URL + numero, function(err, resposta, body){
        if(!err){
            var pokeObjeto = JSON.parse(body)
            
            var newPokemon = {
                "id": pokeObjeto.id,
                "nome": pokeObjeto.name,
                "imagem": pokeObjeto.sprites.front_default,
                "altura": pokeObjeto.height,
                "peso": pokeObjeto.weight,
                "tipo": pokeObjeto.types
            }
            pokemons.push(newPokemon)

            //3
            var caminhoArquivo = './dados/' + novoPokemon.id + '.json'
            var Arquivo = fs.existsSync(caminhoArquivo)

            if (Arquivo){
                console.log("Atualizando pokemon " + newPokemon.nome)
            } else {
                console.log("Salvando pokemon " + newPokemon.nome)
            }
            
            fs.writeFileSync(caminhoArquivo, JSON.stringify(newPokemon), {'encoding': 'utf-8'})
        }
    })
}