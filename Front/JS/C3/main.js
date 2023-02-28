//projeto da mochila

const delta = document.getElementById("novoItem");
const lista = document.getElementById("lista")

const itens = JSON.parse(localStorage.getItem("itens")) || []



itens.forEach( (elemento) => {
    criaElemento(elemento)
})

//console.log(delta);





delta.addEventListener("submit", function (evento){
    evento.preventDefault()

    const nomeItem = evento.target.elements['nome']
    const quantidade = evento.target.elements['quantidade']

    

    

    const itemAtual = {
        "nome": nome.value,
        "quantidade": quantidade.value
    }


    criaElemento(itemAtual)

    itens.push(itemAtual)

    localStorage.setItem("itens",JSON.stringify(itens))


    nomeItem.value = ""
    quantidade.value = ""
    
})






function criaElemento(item){

    const novoItem = document.createElement('li')
    novoItem.classList.add("item")

    const numeroItem = document.createElement('strong')
    numeroItem.innerHTML = item.quantidade

    novoItem.appendChild(numeroItem) 
    novoItem.innerHTML += item.nome

    lista.appendChild(novoItem)

}

