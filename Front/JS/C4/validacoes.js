function verifica_chute(chute){
    const numero = parseInt(chute)

    if (Number.isNaN(numero)){
       elemento_chute.innerHTML += " <div> Valor inválido </div>"
    }

    if (numero > maior_valor || numero < menor_valor){
        elemento_chute.innerHTML += `
        <div> 
        Valor inválido -  
        O valor deve estar entre  ${menor_valor} e ${maior_valor} 
        </div>`
    }

    if(numero === numb){
        document.body.innerHTML = `<h2> Você acertou o valor! </h2>
        <h3> O numero era ${numb}. </h3>
        `

    }
    if(numero>numb){
        elemento_chute.innerHTML += `
        <div>O chute é maior <i class="fa-solid fa-greater-than"></i> que o numero secreto</div>
        `
    }
    if(numero<numb){
        elemento_chute.innerHTML += `
        <div>O chute é menor <i <i class="fa-solid fa-less-than"></i> que o numero secreto </div>
        `
    }
}