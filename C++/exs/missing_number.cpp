
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>



using namespace std;

int main(){

vector <int> arrayY = {1,2,3,5};

// {6,1,2,8,3,4,7,10,5}

// {1,2,3,5}

int maior_num = 0;
int i;

int tamanho = arrayY.size();
for(int i = 0; i<tamanho;i++ ){
    if(arrayY[i]>maior_num){
        maior_num = arrayY[i];
    }
}
vector <int> todos_os_numeros;


int numero_faltante =0;

for(i=1;i<maior_num;i++){
    //  "auto" é utilizada para inferir o tipo de uma variável a partir do valor que ela recebe.
    auto verifica = find(arrayY.begin(), arrayY.end(), i);
    
    if( verifica == arrayY.end()){
        numero_faltante =i;
        break;
    }
}

cout << "O numero faltante = " << numero_faltante << endl;


/*todos_os_numeros.push_back(i);
    cout << i << " ";*/


    return 0;
}