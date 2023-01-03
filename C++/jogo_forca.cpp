#include <iostream>
#include <string>
using namespace std;

const string palavra_sec = "ABACAXI";

bool contem_letra(char letra){
    int i;
 
    for (i=0; i < palavra_sec.size() ; i++){
        if(letra == palavra_sec[i]){
            return true;
        }
    }
    return false;
}


int main(){
    
    cout << palavra_sec << endl;

    bool nao_acertou = true;
    bool nao_enforcou = true;
    char chute;

    while (nao_acertou && nao_enforcou)
    {
        cin >> chute;
        cout<< " O CHUTE FOI = " << chute << endl;

        if(contem_letra(chute)){
            cout  << "Voce acertou o chute! Esta na palavra" << endl;
        
         }
        else{
            cout  << "Voce ERROU o chute" << endl;
        }
    }
    
}