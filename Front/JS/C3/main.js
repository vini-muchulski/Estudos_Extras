//projeto da mochila

const delta = document.getElementById("novoItem");
const lista = document.getElementById("lista")

//console.log(delta);

delta.addEventListener("submit", function (evento){
    evento.preventDefault()

    const nomeItem = evento.target.elements['nome'].value
    const quantidade = evento.target.elements['quantidade'].value
    

    geraElemento(nomeItem,quantidade)
})

function geraElemento(nome,quantidade){

    

    const novoItem = document.createElement('li')
    novoItem.classList.add("item")

    const numeroItem = document.createElement('strong')
    numeroItem.innerHTML = quantidade

    novoItem.appendChild(numeroItem) 
    novoItem.innerHTML += nome

    

    lista.appendChild(novoItem)


}