#include<iostream>
using namespace std;


int main(){
    cout << "****************************" << endl;
    cout << "----- Bem vindo ao jogo ----" << endl;
    cout << "****************************" << endl;

    cout << "Digite o nivel de dificuldade: " << endl;
    cout << "FACIL (F), MEDIO(M) ou DIFICIL(D) " << endl;

    char dificuldade;
    int num_tentativas;

    cin >> dificuldade;

    if (dificuldade == 'F'){
        num_tentativas = 15;
    }
    if (dificuldade == 'M'){
        num_tentativas = 10;
    }
    if (dificuldade == 'D'){
        num_tentativas = 5;
    }
    

    const int numero_sec = 42;
    int tentativas = 1;


    //cout << "O numero secreto eh "<< numero_sec << "!" << endl;
    int chute;
    cout << "Tentativa " << tentativas << " de "<< num_tentativas << endl;
    cout << "Digite o valor do seu chute: " << endl;
    cin >> chute;
    cout << "O chute foi " << chute << endl;

    bool nao_acertou = chute != numero_sec;

    bool acertou = numero_sec == chute;
    if (acertou){
            cout << "Voce acertou o numero secreto! " << endl;
        }

    double pontos = 1000.0;

    while(nao_acertou){

        acertou = numero_sec == chute;
        
        
        double pontos_perd = abs(chute - numero_sec)/2.0;
        pontos = pontos - pontos_perd;

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

        tentativas++;
        cout << "Tentativa " << tentativas << " de "<< num_tentativas << endl;
        cout << "Digite outro chute: " << endl;
        cin >> chute;
        cout << "O chute foi " << chute << endl;
            
        }

        cout.precision(2);
        cout << fixed;
        cout << "Sua pontuacao foi de " << pontos << " pontos!" << endl;
        cout << "FIM DE JOGO! " << endl;

}