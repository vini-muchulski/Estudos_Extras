# -*- coding: utf-8 -*-

a = int(input("Digite um valor para A: "))
b = int(input("Digite um valor para B: "))
c = int(input("Digite um valor para C: "))
d = int(input("Digite um valor para D: "))

if (b>c and d>a and c+d>a+b and c>0 and d>0 and (a%2 == 0)):
    print("Valores aceitos")
else:
    print("Valores nao aceitos")
