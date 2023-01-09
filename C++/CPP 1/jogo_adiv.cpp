#include <iostream>
#include <cstdlib>
#include <ctime>
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
    
    srand(time(NULL));
    const int numero_sec = rand() % 100;
    //cout << "O numero secreto eh "<< numero_sec << "." << endl;
    int tentativas = 1;
    

    
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

    while(nao_acertou && tentativas<num_tentativas){

        acertou = numero_sec == chute;
        nao_acertou = chute != numero_sec;
        
        
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
        cout << " " << endl;
        cout << "Tentativa " << tentativas << " de "<< num_tentativas << endl;
        cout << " " << endl;
        cout << "Digite outro chute: " << endl;
        cin >> chute;
        cout << "O chute foi " << chute << endl;

        if (acertou){
            cout << "Voce acertou o numero secreto em "<< tentativas <<" tentativas!" << endl;
            break;
        }
            
        }
        cout << " " << endl;
        cout << "FIM DE JOGO! " << endl;

        acertou = numero_sec == chute;
        nao_acertou = chute != numero_sec;
        

        if(nao_acertou){
            cout << "Voce nao conseguiu!" << endl;
        }
        else{
            cout << "Voce conseguiu!!" << endl;
            cout.precision(2);
            cout << fixed;
            cout << "Sua pontuacao foi de " << pontos << " pontos!" << endl;
            }

}