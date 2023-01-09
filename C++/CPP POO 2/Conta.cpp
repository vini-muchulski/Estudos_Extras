#include "Conta.hpp"
#include <iostream>

// arquivo de implementacao

Conta::Conta(std::string numero, std::string nomeTitular,std::string cpf){
    this->numero = numero;
    this->nomeTitular = nomeTitular;
    this->cpf = cpf;
    this->saldo = 0;

}


void Conta::sacar(float valor_Sacar){

    if(valor_Sacar <0){
        std::cout << "Valor de saque negativo! " << std::endl;
        return;

    }
}

void Conta::depositar(float valor_Depositar){
    if(valor_Depositar <0){
        std::cout << "Valor de deposito negativo! " << std::endl;
        return;
    }

    saldo +=valor_Depositar;
    
}

float Conta::getSaldo(){
    return saldo;
}

void Conta::definirNomeTitular(std::string nome)
{
    nomeTitular = nome;
}