
const controle = document.querySelectorAll(".controle-ajuste")


function gerenciaValor(operacao, controle){
    const peca = controle.querySelector(".controle-contador")

    if(operacao === "+"){
        peca.value  = parseInt(peca.value ) + 1
    }
    else if (operacao === "-"){
        peca.value  = parseInt(peca.value ) - 1
    
    }
    
}

controle.forEach( function(elemento,indice){
    elemento.addEventListener("click", function (evento){

        const sinal = evento.target.textContent
        const controle = evento.target.parentNode
        console.log(controle)

        gerenciaValor(sinal,controle)
    } )
})


