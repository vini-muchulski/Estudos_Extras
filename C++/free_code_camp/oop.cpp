
#include <iostream>
#include <vector>
#include <string>



using namespace std;

    class Funcionario{

// atributos
public:
    string Nome;
    string Empresa;
    int Idade;
    

// metodos
public:

void se_apresente(){
    cout << "Funcionario \nNome: " << Nome <<" - Empresa: "<< Empresa <<  " - Idade: " << Idade << endl;;
}

Funcionario(string nome, string empresa, int idade){
    Nome = nome;
    Empresa = empresa;
    Idade = idade;
}


};

int main(){

    Funcionario func1 = Funcionario("Vini","SpaceX",25);
    

    func1.se_apresente();


    Funcionario func2 = Funcionario("Apeiron","NASA",32);
   

    func2.se_apresente();
    





return 0;
}