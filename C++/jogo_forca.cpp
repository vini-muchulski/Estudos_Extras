#include <iostream>
#include <string>
#include<map>
#include<vector>

using namespace std;

const string palavra_sec = "ABACAXI";

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




int main(){
    
    //cout << palavra_sec << endl;

    cout << " "<< endl;
    cout << "**** Jogo da forca ****" << endl;
    cout << " "<< endl;

    bool nao_acertou = true;
    bool nao_enforcou = true;
    char chute;

    while (nao_acertou && nao_enforcou)
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
    
}