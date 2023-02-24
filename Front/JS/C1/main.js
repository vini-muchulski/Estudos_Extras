//alert("Olá Mundo");

function  tocaSom(botaoID){
    document.querySelector(botaoID).play();
}

//document.querySelector('.tecla_pom').onclick= tocaSomPom;

const listaDasTeclas = document.querySelectorAll('.tecla');

let cont = 0;

while (cont < listaDasTeclas.length) {

    const tecla = listaDasTeclas[cont];

    const indice = tecla.classList[1];
    

    const audio_referencia = `#som_${indice}`
    //console.log(audio_referencia);

    //                                      templete string
    tecla.onclick = function () { 
        tocaSom(audio_referencia); 
        console.log(audio_referencia);
    }

    cont = cont + 1;

}
