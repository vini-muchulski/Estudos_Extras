#pragma once
#include <string>

// arquivo de definicao

struct Conta{
    std::string numero;
    std::string cpf;
    std::string nome;
    float saldo;

    void sacar(float valor_Sacar);
    void depositar(float valor_Depositar);
};