const elemento_para_adicionar_livros = document.getElementById('livros')

function exibir_livros(lista_de_livros){
    lista_de_livros.forEach(livro => {
        elemento_para_adicionar_livros.innerHTML +=`
        <div class="livro">

      <img class="livro__imagens" 
      src="${livro.imagem}" 
      alt="${livro.alt}" />

      <h2 class="livro__titulo">
      ${livro.titulo}
      </h2>

      <p class="livro__descricao">${livro.autor}</p>
      <p class="livro__preco" id="preco">R$ ${livro.preco.toFixed(2)}</p>

      <div class="tags">
        <span class="tag">Categorias Front End</span>
      </div>
    </div>
        `
    });

}