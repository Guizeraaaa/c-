#include<iostream>
using namespace std; 

void mensagemBase() {
    cout <<  "Digite a base" << endl;
}

void mensagempotencia() {
    cout <<  "Digite a potencia" << endl;
}

int main(){
    
    float base, potencia, n, resultado;
    mensagemBase();
    cin >> base;

    mensagempotencia();
    cin >> potencia;

    for (int i=1; i <= potencia; i++ ){
             resultado = base * base;
             n = resultado * base;
    }
    
    cout << "o resultado e de: " << n << endl;
    return 0;
}