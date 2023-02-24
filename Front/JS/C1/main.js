//alert("Olá Mundo");

function  tocaSom(botaoID){
    document.querySelector(botaoID).play();
}

//document.querySelector('.tecla_pom').onclick= tocaSomPom;

const listaDasTeclas = document.querySelectorAll('.tecla');



for (let cont = 0; cont < listaDasTeclas.length; cont++ ) {

    const tecla = listaDasTeclas[cont];

    const indice = tecla.classList[1];
    

    const audio_referencia = `#som_${indice}`
    //console.log(audio_referencia);

    //                                      templete string
    tecla.onclick = function () { 
        tocaSom(audio_referencia); 
        console.log(audio_referencia);
    } 
}

