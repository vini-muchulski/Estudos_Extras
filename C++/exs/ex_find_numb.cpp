
#include <iostream>
#include <vector>
#include <string>


#include <cstdlib>

using namespace std;

int main(){

int valor = 0;
int cont = 0;
int i=  0;



cout << "Digite o valor: " << endl;
cin >> valor;
int resultado = valor;
int contador_pares = 0;



vector <int> lista;


while(cont <valor){

    if(i%2 == 1){

    resultado = i;
    while(resultado>0){
        
        if(resultado%2 == 0){
            contador_pares++;
            break;
        }
        resultado = resultado/10;

    }

    if(contador_pares == 0){
        lista.push_back(i);
        cont++;
        cout << i << endl;
    }
}  

    contador_pares = 0;
    i++;
}

int maior = lista[lista.size()-1];

cout << "maior valor impar " << maior << endl;



    return 0;
}