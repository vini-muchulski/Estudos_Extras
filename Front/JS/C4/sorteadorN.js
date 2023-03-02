const menor_valor = 1
const maior_valor = 1000
const numb = parseInt(Math.random()*maior_valor + 1)

console.log(numb)

const elemento_menor_valor = document.getElementById("menorValor")
elemento_menor_valor.innerHTML = menor_valor

const elemento_maior_valor = document.getElementById("maiorValor")
elemento_maior_valor.innerHTML = maior_valor


