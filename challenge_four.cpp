#include<iostream>
using namespace std; 

void mensagemBase() {
    cout <<  "Digite a base" << endl;
}

void mensagempotencia() {
    cout <<  "Digite a potencia" << endl;
}

int main(){
    
    float base, potencia, n, resultado=1;
    mensagemBase();
    cin >> base;

    mensagempotencia();
    cin >> potencia;

    for (int i=0; i < potencia; i++ ){
             resultado = base * base;
             
    }
    
    cout << "o resultado e de: " << resultado << endl;
    return 0;
}