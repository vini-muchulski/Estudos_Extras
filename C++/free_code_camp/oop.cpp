
#include <iostream>
#include <vector>
#include <string>



using namespace std;

    class Funcionario{

// atributos
private:
    string Nome;
    string Empresa;
    int Idade;
    

// metodos
public:


Funcionario(string nome, string empresa, int idade){
    Nome = nome;
    Empresa = empresa;
    Idade = idade;
}


void se_apresente(){
    cout << "Funcionario \nNome: " << Nome <<" - Empresa: "<< Empresa <<  " - Idade: " << Idade << endl;;
}



void setName( string name){
    Nome = name;
}

void setEmpresa( string empresa){
    Empresa = empresa;
}

void setIdade( int idade){
    if (idade <18){
        cout << "So sao permitidos funcionarios com mais de 18 anos de idade. " << endl;
    }else{
    Idade = idade;
    }
}



string getName(){
    return Nome;
}

string getEmpresa(){
    return Empresa;
}

int getIdade(){
    return Idade;
}


};

int main(){

    Funcionario func1 = Funcionario("Vini","SpaceX",25);

    func1.se_apresente();


    Funcionario func2 = Funcionario("Apeiron","NASA",32);

    func2.se_apresente();

    cout << func1.getName() << " tem " << func1.getIdade() << " anos " << endl;

    func2.setIdade(14);
    cout << func2.getIdade() << endl;
    
return 0;
}