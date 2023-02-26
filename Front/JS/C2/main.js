
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


const pecas = {
    "bracos": {
        "forca": 29,
        "poder": 35,
        "energia": -21,
        "velocidade": -5
    },

    "blindagem": {
        "forca": 41,
        "poder": 20,
        "energia": 0,
        "velocidade": -20
    },
    "nucleos":{
        "forca": 0,
        "poder": 7,
        "energia": 48,
        "velocidade": -24
    },
    "pernas":{
        "forca": 27,
        "poder": 21,
        "energia": -32,
        "velocidade": 42
    },
    "foguetes":{
        "forca": 0,
        "poder": 28,
        "energia": 0,
        "velocidade": -2
    }
}


