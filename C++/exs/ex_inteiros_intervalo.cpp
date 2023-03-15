// Faça um programa que receba dois números inteiros e gere os números inteiros que estão no intervalo compreendido por eles.

#include <iostream>

using namespace std;

int main(){

int n1,n2;
int i;


cout << "digite o primeiro numero = "  << endl;
cin >> n1;

cout << "digite o segundo numero = "  << endl;
cin >> n2;

if (n1<n2){
    for(i=n1;i<=n2;i++){

        cout <<  i << endl;
    }
}

else{
    for(i=n1;i>=n2;i--){

        cout <<  i << endl;
    }
}


    return 0;
}