
def verifica_numero(numero):
    if(numero % 2 != 0):
            print("Weird")

    else:
        if(numero >= 2 and numero <=5):
            print("NOT Weird")
        if(numero >= 6 and numero <=20):
            print(" Weird")

        if(numero> 20):
            print("NOT Weird")

num = int(input("Digite um valor: "))


verifica_numero(num)