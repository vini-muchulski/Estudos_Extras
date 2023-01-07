#include <iostream>
#include <cmath>


using namespace std;

int main(){

float minutos;

cout << "digite a distancia entre os veiculos "<< endl;
int distanciaa;
cin >> distanciaa;

minutos = distanciaa/(0.5);

cout << fixed;
cout.precision(2);

cout << " o tempo que levara para alcancar o outro veiculo em minutos eh  = " << minutos << endl;
}