// Faça um programa que sirva para calcular o fatorial de um número inteiro qualquer.

#include <iostream>

using namespace std;

int main(){
int mult =1;
int i;
int fatorial;

cout << "digite um numero para o fatorial = "  << endl;
cin >> fatorial;


for(i=fatorial;i>0;i--){
    mult = mult * i;

}

cout << "fatorial de " << fatorial << " = " << mult << endl;

    return 0;
}