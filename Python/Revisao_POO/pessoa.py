from datetime import datetime

class Pessoa:
    ano_atual = int(datetime.strftime(datetime.now(), "%Y"))
    
    def __init__(self,nome,idade, comendo=False):
        self.nome = nome
        self.idade = idade
        self.comendo= comendo

    def comer(self, alimento):
        if self.comendo == True:
            print(f"{self.nome} esta comendo!")
            return
        
        print(f"{self.nome} já está comendo {alimento}.")
        self.comendo = True

    def parar_comer(self):
        if self.comendo == False:
            print(f"{self.nome} nao esta comendo!")

        else:
            print(f"{self.nome} PAROU de comer!")
            self.comendo = False




    