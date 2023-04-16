
#include <iostream>
#include <vector>
#include <string>

using namespace std;


class AbstractFuncionario{
    virtual void Requerer_promocao()=0;

};

class Funcionario:AbstractFuncionario {

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

virtual void trabalhar(){
    cout << Nome << " esta realizando suas tarefas" <<endl;
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


void Requerer_promocao(){
    if(Idade>=30){
        cout << Nome << " foi promovido" << endl;
    }
    else{
        cout << Nome << " NAO foi promovido" << endl;
    }
}
};



// herenca - classe filha
class Desenvolvedor:public Funcionario{
public:
//atributos
string Fav_prog_lang;

//metodos
public:
Desenvolvedor(string nome, string empresa, int idade, string fav_prog_lang):Funcionario(nome,empresa,idade){
    Fav_prog_lang = fav_prog_lang;
    
}

void coda_em_qual_lang(){
    cout << getName() << " coda na linguagem " << Fav_prog_lang << endl;
}

void trabalhar(){
    cout << getName() << " esta trabalhando e programando na linguagem " << Fav_prog_lang << endl;
}

};




class Professor: public Funcionario{
    public:
    //atributos
    string Materia;


    //metodos
    Professor(string nome, string empresa, int idade, string materia):Funcionario(nome,empresa,idade){
        Materia = materia;
    }

    void Preparar_aula(){
        cout<< getName() <<  " dara aula de " << Materia << endl;
    }

    void trabalhar(){
    cout << getName() << " esta dando aula de  " << Materia << endl;
}
};

int main(){

    Funcionario func1 = Funcionario("Vini","SpaceX",25);
    Funcionario func2 = Funcionario("Apeiron","NASA",32);

    //func1.Requerer_promocao();
    //func2.Requerer_promocao();

    Desenvolvedor dev1 = Desenvolvedor("Levi","Boeing",28,"Python");
    dev1.coda_em_qual_lang();
    dev1.Requerer_promocao();
    
    /*cout << func1.getName() << " tem " << func1.getIdade() << " anos " << endl;

    func1.se_apresente();
    func2.se_apresente();

    func2.setIdade(14);
    cout << func2.getIdade() << endl; */

    Professor prof1 = Professor("Anaximandro","Escola pitagorica", 56,"Filosofia");
    prof1.Requerer_promocao();
    prof1.Preparar_aula();

    dev1.trabalhar();
    prof1.trabalhar();

    Funcionario *e1=&dev1;
    Funcionario *e2=&prof1;

    e1->trabalhar();
    e2->trabalhar();

    
return 0;
}