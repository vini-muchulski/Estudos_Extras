# Essa função converte um número decimal em um número romano usando um dicionário que relaciona valores decimais com algarismos romanos.

"""Ao receber um número decimal como entrada, a função percorre o dicionário e, 
para cada valor que for menor ou igual ao número decimal, adiciona o algarismo correspondente à string romano_alg. 
Em seguida, subtrai o valor do número decimal e continua a percorrer o dicionário até que o número decimal seja zero."""

decimal = int(input("Digite um numero decimal: "))

 
def decimal_para_romano(numero_decimal):
    romano_decimal_dicionario = { 1000: 'M', 900: 'CM', 500: 'D', 400: 'CD', 
    100: 'C', 90: 'XC', 50: 'L', 40: 'XL', 10: 'X', 9: 'IX',5: 'V', 4: 'IV', 1: 'I'}

    romano_alg = ''

    # vai pegar cada elemento do dicionario, cada um destes tendo um valor e uma letra associada a esse valor 
    # enquanto o numero decimal for maior que o elemento iterado ele vai continuar acrescentando a letra a str romano_alg
    for valor, algarismo in romano_decimal_dicionario.items():
        while numero_decimal >= valor:
            numero_decimal -= valor
            romano_alg += algarismo

    print(romano_alg)



decimal_para_romano(decimal)
