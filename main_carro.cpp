#include <iostream>
#include "carro.h"
using namespace std;
int main(){
carro gol(1788,1987,547);

//palio.setano(1935);

cout << "Palio: \n";
cout << "ANO: " << gol.getano() << endl;
cout << "Valor: " << gol.getValor() << endl;
cout << "KM: " << gol.getKM() << endl;

    return 0;
}