#include<iostream>
using namespace std;


int main(){
    
    cout << "---- Bem vindo ao jogo ----" << endl;

    int numero_sec = 27;

    cout << "O numero secreto eh "<< numero_sec << "!" << endl;
    
    int chute;

    cout << "Digite o valor do seu chute: " << endl;
    cin >> chute;
    cout << "O chute foi " << chute << endl;

    if ( numero_sec == chute){
        cout << "Vc acertou o numero secreto! " << endl;
    }
    else{
        if (chute > numero_sec){
            cout << "O seu chute foi MAIOR que o numero gerado!"<< endl;
        
        }
        else{
            cout << " O chute foi MENOR que o numero gerado!" << endl;
        }
    }
}