#include <iostream>
#include <string>
#include<map>
#include<vector>
#include <fstream>
#include <cstdlib>
#include <ctime>


using namespace std;

string palavra_sec = "ABACAXI";

map<char,bool> ja_chutou;
vector<char> chutes_errados;

bool contem_letra(char chute){
    int i;
 
    /*
    for (i=0; i < palavra_sec.size() ; i++){
        if(chute == palavra_sec[i]){
            return true;
        }
    }
    */

    for(char letra : palavra_sec)
        if(chute == letra){
            return true;
        }
    return false;
}


bool nao_acertou(){
    for(char letra : palavra_sec){
        // se a letra n foi chutada, ao menos uma letra falta para a palavra estar completa, entao algum valor 
        // no map vai estar falso ainda
        if(!ja_chutou[letra]){
            return true;
        }
    }
    return false;
}

bool nao_enforcou(){
    if(chutes_errados.size() == 5){
        return false;
    }
    return true;

    //return chutes_errados.size() < 5;
}

vector<string> le_arquivo(){
    ifstream arquivo;
    string palavra_lida;
    arquivo.open("palavras.txt");

    vector<string> palavras_do_arquivo;

    int qnt_palavras;
    arquivo >> qnt_palavras;

    //cout << " O ARQUIVO POSSUI " << qnt_palavras << endl;

       for(int i=0;i<qnt_palavras;i++){

        arquivo >> palavra_lida;
        palavras_do_arquivo.push_back(palavra_lida);

        //cout << "LINHA " << i << " palavra " << palavra_lida << endl;
        }

        arquivo.close();
        return palavras_do_arquivo;


}


void sortear_palavra(){
    vector<string> palavras = le_arquivo();

    int tam = palavras.size();

    srand(time(NULL));
    const int numero = rand() % tam;

    palavra_sec = palavras[numero];
}
    


int main(){
    
    //cout << palavra_sec << endl;

    cout << " "<< endl;
    cout << "**** Jogo da forca ****" << endl;
    cout << " "<< endl;

    
    sortear_palavra();

    char chute;

    while (nao_acertou() && nao_enforcou())
    {
        for(char letra: palavra_sec){
            if(ja_chutou[letra] ){
                cout << letra <<" ";
            }
            else{
                cout << "_ ";
            }
        }

        cout << " ";
        cin >> chute;
        ja_chutou[chute] = true;

        cout<< " O CHUTE FOI = " << chute << endl;

        if(contem_letra(chute)){
            cout  << "Voce acertou o chute! Esta na palavra" << endl;
            cout << " "<< endl;
        
         }
        else{
            cout  << "Voce ERROU o chute" << endl;
            cout << " "<< endl;
            chutes_errados.push_back(chute);
        }

            cout << "Chutes errados: ";
            for(char letra : chutes_errados){
            cout << letra << " ";
        }
        cout << " " << endl;
        
    }

        cout << " " << endl;
        cout << " FIM DE JOGO " << endl;
        cout << " A palavra secreta era: "<< palavra_sec << endl;
        cout << " " << endl;

        if(nao_acertou()){
            cout << " PERDEU! Voce foi enforcado! " << endl;
        }
        else{
            cout << " GANHOU! Voce foi ACERTOU a palavra! " << endl;
        }
    
}