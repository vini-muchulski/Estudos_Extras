#include "Conta.hpp"
#include <iostream>

// arquivo de implementacao

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