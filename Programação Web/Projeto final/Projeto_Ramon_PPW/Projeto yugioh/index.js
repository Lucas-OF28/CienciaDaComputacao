var url = "https://projetofinal-ppw.herokuapp.com/api/112856";
var lista = [];
function listar()
{
    var requisicao = fetch(url)
    requisicao.then(function(resposta){
       var tratamento = resposta.json()
       tratamento.then(function(dado){
           console.log(dado)
           lista = (dado);
           gerarHTML();
       })
    })
}
function gerarHTML(){
    for (var int = 0; i<lista.length;i++){
        var li = document.createElement("li")
        var divNome = document.createElement("div")
        var divBotoes = document.createElement("div")
        var botaoVisualizar = document.createElement("button")
        var botaoDeletar = document.createElement("button")

        divNome.textContent = lista[i].nome
        divBotoes.classList.add("botoes")
        botaoVisualizar.textContent = "Visualizar"
        botaoDeletar.textContent = "Deletar"
        botaoVisualizar.value = i
        botaoDeletar.value = i
        botaoVisualizar.onclick = visualizar;
        botaoDeletar.onclick = deletar;

        var ul = document.querySelector("#lista")

        ul.appendChild(li)
        li.appendChild(divNome)
        li.appendChild(divBotoes)
        divBotoes.appendChild(botaoVisualizar)
        divBotoes.appendChild(botaoDeletar)

    }
}
function visualizar(){
    var indice = evento.target.value

    var nome = document.querySelector("#nome")
    var atributo = document.querySelector("#atributo")
    var tipoDaCarta = document.querySelector("#tipoDaCarta")
    var nivel = document.querySelector("#nivel")
    var ataque = document.querySelector("#ataque")
    var defesa = document.querySelector("#defesa")
    var sitDaCarta= document.querySelector("#sitCarta")
    var image = document.querySelector("#image")

    nome.textContent = lista[indice].nome
    atributo.textContent = lista[indice].atributo
    tipoDaCarta.textContent = lista[indice].tipoDaCarta
    nivel.textContent = lista[indice].nivel
    ataque.textContent = lista[indice].ataque
    defesa.textContent = lista[indice].defesa
    sitDaCarta.textContent = lista[indice].sitDaCarta
    image.textContent = lista[indice].image
}
function deletar(evento){
    var indice = evento.target.value
    var options = {
        method: "DELETE"
}
var requisicao = fetch(url + "/" + indice, options)
requisicao.then(function(resposta){
    if(resposta.status == 200){
        document.location.reload(true)
    }
})
}
function salvar(evento){
    evento.preventDefault()

    var novaCarta = {
        "nome": document.querySelector("#nome").value,
        "atributo": document.querySelector("#atributo").value,
        "tipoDaCarta": document.querySelector("#tipoDaCarta").value,
        "nivel": document.querySelector("#nivel").value,
        "ataque": document.querySelector("#ataque").value,
        "defesa": document.querySelector("#defesa").value,
        "sitCarta": document.querySelector("#sitCarta").value,
        "image": document.querySelector("#image").value,
    }
    var stringResultado = JSON.stringify(novaCarta)

    var opcoes = {
        "method": "POST",
        "body": stringResultado, 
        "headers": {
            "content-type": 'application/json'
        }
    }

    var requisicao = fetch(url, opcoes)
    requisicao.then(function(resposta){
        if(resposta.status == 200){
            alert("Cadastro ralizado")
        } else {
            alert("Erro ao cadastrar")
        }
    })
}



