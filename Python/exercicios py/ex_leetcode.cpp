
#include <iostream>
#include <vector>
#include <string>
#include <fstream>


#include <cstdlib>


using namespace std;

int main(){
    
    vector< vector<int> > contas = {{1,5},{7,3}, {3,5}};

    int tamanho = 0;
    int saldo = 0;

    int cont = 1;
    int mais_rico = 0;
    int maior_saldo = 0;

    for( int i = 0; i < contas.size();i++){
    tamanho = contas[i].size();
    for(int j =0;j<tamanho;j++){
        saldo += contas[i][j];
            
        }

        if(cont == 1){
            mais_rico = 1;
            maior_saldo = saldo;
        }
        if(cont != 1){
            if(saldo>maior_saldo){
            maior_saldo = saldo;
            mais_rico = cont;
        }
    }
    cout << "Cliente " << cont << " tem riqueza de $ " << saldo << endl;
        cont++;
        saldo = 0;

    }

    cout << "Cliente mais rico = " << mais_rico << " tem riqueza de $ " << maior_saldo << endl;

    system("pause");

    return 0;
}