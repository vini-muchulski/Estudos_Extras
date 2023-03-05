let livros =[]

const endpoint_Api = 'https://guilhermeonrails.github.io/casadocodigo/livros.json'

get_buscar_livros_da_api()



async function get_buscar_livros_da_api(){
    const resposta = await fetch(endpoint_Api)
    livros = await resposta.json()
    //console.table(livros)
    let livros_com_desconto = aplicar_desconto(livros)
    exibir_livros(livros_com_desconto)
}

