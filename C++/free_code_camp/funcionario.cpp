
#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <ctime>


using namespace std;

    class Funcionario{

// atributos
public:
    string Nome;
    string Empresa;
    int Idade;
    int id;

// metodos

void gera_id(){
    
    unsigned seed = time(0);
    srand(seed);
    id = rand();
}

void mostra_informacoes(){
    cout << "Funcionario \nNome: " << Nome <<" Empresa: "<< Empresa <<  " Idade: " << Idade << " ID = "<< id << endl;;
}


};

int main(){

    Funcionario func1;
    func1.Idade = 25;
    func1.Nome = "Vini";
    func1.Empresa = "SpaceX";

    func1.mostra_informacoes();
    
    

    Funcionario func2;
    func2.Idade = 32;
    func2.Nome = "Apeiron";
    func2.Empresa = "NASA";

    func2.mostra_informacoes();




system("pause");
return 0;
}