//alert('oi')

const somar = document.querySelector("#somar")
const subtrair = document.querySelector("#subtrair")
const braco = document.querySelector("#braco")


const controle = document.querySelectorAll(".controle-ajuste")
console.log(controle)

somar.addEventListener("click", function(){
    gerenciaValor("somar")
} )

subtrair.addEventListener("click", function(){
    gerenciaValor("subtrair")
} )

function gerenciaValor(operacao){
    if(operacao === "somar"){
        braco.value  = parseInt(braco.value ) + 1
    }
    else{
        braco.value  = parseInt(braco.value ) - 1
    
    }
    
}

controle.forEach( function(elemento,indice){
    console.log(indice)
    console.log(elemento)
})

