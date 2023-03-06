const botoes = document.querySelectorAll('.btn')

botoes.forEach(btn => btn.addEventListener('click', filtrar_livros_de_front))

function filtrar_livros_de_front(){
    const elementBTN =document.getElementById(this.id)
    const categoria = elementBTN.value


    let livros_filtrados = categoria =='disponivel' ? livros.filter(livro => livro.quantidade > 0) : livros.filter(livro => livro.categoria == categoria)
    exibir_livros(livros_filtrados)
}