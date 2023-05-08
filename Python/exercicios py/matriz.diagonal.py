matriz = [[1,2,3],
         [4,5,6],
         [7,8,9]]



tamanho = len(matriz)

elementos = 0

diag_princ = 0
diag_sec = 0

soma_total = 0

for linha in matriz:
    for i in linha:
        elementos +=1


for i in range(0,tamanho):
    diag_princ += matriz[i][i]

for j in range(tamanho-1, -1, -1):
    diag_sec += matriz[j][j]

verificar = int((tamanho+ 1)/2)

if(tamanho%2 != 0):
  soma_total = diag_princ + diag_sec - matriz[verificar-1][verificar-1]
else:
    soma_total = diag_princ + diag_sec

print(soma_total)


    