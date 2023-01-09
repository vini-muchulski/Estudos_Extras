#pragma once
#include <string>

// arquivo de definicao

class Conta{
private:
    std::string numero;
    std::string cpf;
    std::string nomeTitular;
    float saldo = 0;

public:
    Conta(std::string numero, std::string nomeTitular,std::string cpf);
    void sacar(float valor_Sacar);
    void depositar(float valor_Depositar);
    float getSaldo();
    void definirNomeTitular(std::string nome);
};