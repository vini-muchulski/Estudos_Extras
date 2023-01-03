#include<iostream>
using namespace std;


int main(){
    cout << "****************************" << endl;
    cout << "----- Bem vindo ao jogo ----" << endl;
    cout << "****************************" << endl;

    const int numero_sec = 27;
    int tentativas = 0;

    //cout << "O numero secreto eh "<< numero_sec << "!" << endl;
    int chute;
    cout << "Tentativa " << tentativas << endl;
    cout << "Digite o valor do seu chute: " << endl;
    cin >> chute;
    cout << "O chute foi " << chute << endl;

    bool nao_acertou = chute != numero_sec;

    bool acertou = numero_sec == chute;
    if (acertou){
            cout << "Voce acertou o numero secreto! " << endl;
        }


    while(nao_acertou){

        acertou = numero_sec == chute;
        tentativas++;
        

        if (acertou){
            cout << "Voce acertou o numero secreto em "<< tentativas <<" tentativas!" << endl;
            break;
        }
        else{
            if (chute > numero_sec){
                cout << "O seu chute foi MAIOR que o numero gerado!"<< endl;
            
            }
            else{
                cout << "O chute foi MENOR que o numero gerado!" << endl;
            }
        }

        cout << "Digite outro chute: " << endl;
        cin >> chute;
        cout << "O chute foi " << chute << endl;
        cout << "Tentativa " << tentativas << endl;
            
        }

        
    

    
}