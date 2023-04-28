"""Você recebe uma grade inteira onde é a quantidade de dinheiro que o cliente tem no banco. Devolva a riqueza que o cliente mais rico tem.m x naccountsaccounts[i][j]i​​​​​​​​​​​th​​​​j​​​​​​​​​​​th

A riqueza de um cliente é a quantidade de dinheiro que ele tem em todas as suas contas bancárias. O cliente mais rico é o cliente que tem o máximo de riqueza."""


accounts = [[1,5],[7,3],[3,5]]
cont = 1
saldo = 0
mais_rico = 1
maior_saldo = 0

for conta in accounts:

    tamanho = len(conta)
    for i in range(0,tamanho):
        saldo +=conta[i]
    
    if(cont == 1):
        mais_rico = 1
        maior_saldo = saldo
    if(cont !=1):
        if(saldo>maior_saldo):
            maior_saldo = saldo
            mais_rico = cont


    print(f"Cliente {cont} tem riqueza de {saldo} $")
    saldo = 0
    cont+=1



print(f"O cliente mais rico é o {mais_rico} com riqueza de {maior_saldo}$")