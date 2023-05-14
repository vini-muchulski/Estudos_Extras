
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){

vector <vector <int>> matriz =  {{1,2,3,4},{5,6,7,8},{9,10,11,12}};

// {{1,2,3,4},{5,6,7,8},{9,10,11,12}}

// {{1,2,3},{4,5,6},{7,8,9}}

vector <int> spiral = {};

size_t tamanho = 3;
size_t linha = matriz[0].size();

size_t i,k;


    for(i=0;i<=tamanho;i++){
        if(i==0){
            for(k=0;k<linha;k++){
            spiral.push_back(matriz[0][k]);
            }
        }
        if(i==1){
            spiral.push_back(matriz[1][linha-1]);
        }

        if(i==2){
            int k;
            for(k=linha-1;k>=0;k--){
                spiral.push_back(matriz[2][k]);
            }
        }
        if(i==3){
            for(k=0;k<=linha-1-1;k++){
                spiral.push_back(matriz[1][k]);
            }
        }
    }
size_t j;
for(j=0;j<spiral.size();j++){
    cout << spiral[j] << " ";
}
    return 0;
}