//projeto da mochila

const delta = document.getElementById("novoItem");
const lista = document.getElementById("lista")

const itens = JSON.parse(localStorage.getItem("itens")) || []



itens.forEach( (elemento) => {
    console.log(elemento.nome,elemento.quantidade)
})

//console.log(delta);

delta.addEventListener("submit", function (evento){
    evento.preventDefault()

    const nomeItem = evento.target.elements['nome']
    const quantidade = evento.target.elements['quantidade']

    geraElemento(nomeItem.value,quantidade.value)


    nomeItem.value = ""
    quantidade.value = ""
    
})

function geraElemento(nome,quantidade){

    

    const novoItem = document.createElement('li')
    novoItem.classList.add("item")

    const numeroItem = document.createElement('strong')
    numeroItem.innerHTML = quantidade

    novoItem.appendChild(numeroItem) 
    novoItem.innerHTML += nome

    

    lista.appendChild(novoItem)

    const itemAtual = {
        "nome": nome,
        "quantidade": quantidade
    }


    itens.push(itemAtual)

    localStorage.setItem("itens",JSON.stringify(itens))
    


}

