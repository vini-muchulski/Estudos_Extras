#include <iostream>
#include <cmath>


using namespace std;

int main(){
    int x1,y1;
    int x2,y2;



    cout << "Digite o valor de x1: " << endl;

    cin >> x1;

    cout << "Digite o valor de y1: " << endl;

    cin >> y1;

    cout << "Digite o valor de x2: " << endl;

    cin >> x2;

    cout << "Digite o valor de y2: " << endl;

    cin >> y2;
    

    cout << "x1 E y1 " << x1 << " "<< y1 <<endl;
    cout << "x2 E y2" << x2 << " " << y2 <<endl;

    float dist = (x2-x1)*(x2-x1) + (y2-y1)*(y2-y1);

    float dist_total = sqrt(dist);

    cout << "a distancia entre os pontos eh de = " << dist_total << endl;

    

}