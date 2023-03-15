//Faça um programa que peça um inteiro ao usuário e exiba sua tabuada

#include <iostream>

using namespace std;

int main(){

int numero;

cout << "digite um numero = "  << endl;
cin >> numero;

int i;
int valor;

for (i=1;i<=10;i++){
    valor = i*numero;

    cout <<  numero << " x  " << i << " = " << valor << endl;

}

    return 0;
}