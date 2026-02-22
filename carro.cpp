#include <iostream>
#include "carro.h"

using namespace std;


carro::carro(int a=0, float v=-1, float k=-1)
{

 ano = a;
valor = v;
 km = k;

}

int carro::getano()
{

    return ano;
}

float carro::getValor(){
    return valor;
}

float carro::getKM(){
    return km;
}