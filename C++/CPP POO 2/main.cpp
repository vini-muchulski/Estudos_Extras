#include "Conta.hpp"
#include <iostream>
#include <string>

using namespace std;

int main(){

    Conta contaA("2710", "Vini", "1234");

    contaA.depositar(500);

    cout << "Conta a possui de saldo = " << contaA.getSaldo() << endl;

    return 0;
}