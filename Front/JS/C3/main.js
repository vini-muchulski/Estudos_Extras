const delta = document.querySelector("#novoItem");

console.log(delta);

delta.addEventListener("submit", function (evento){
    evento.preventDefault()

    const nomeItem = evento.target[0].value
    const quantidade = evento.target[1].value


    console.log("OK!!")
    console.log(quantidade);
    console.log(nomeItem);
})