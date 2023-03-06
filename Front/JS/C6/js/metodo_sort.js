let botao_ordenar_preço = document.getElementById('btnOrdenarPorPreco')

botao_ordenar_preço.addEventListener('click', ordenar_livros_porPreco)

function ordenar_livros_porPreco(){
 let livros_ordenados = livros.sort((a,b) => a.preco - b.preco)
 exibir_livros(livros_ordenados)
}