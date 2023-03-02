const elemento_chute = document.getElementById("chute")

window.SpeechRecognition = window.SpeechRecognition || webkitSpeechRecognition;

const recognition = new SpeechRecognition();

recognition.lang = 'pt-Br'

recognition.start()

recognition.addEventListener('result', onSpeak)

function onSpeak(evento) {
    chute = evento.results[0][0].transcript
    console.log(chute)
    exibeChute(chute)
    verifica_chute(chute)
}

function exibeChute(chute){
    elemento_chute.innerHTML = `<div>Voce chutou o valor...</div>
                                <span class="box"> ${chute}</span>                                               
    `
}

recognition.addEventListener('end', () => recognition.start())

