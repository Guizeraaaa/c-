#include<iostream>
using namespace std;

void mensagem(){
    cout << "Digite um numero inteiro" << endl;
}


int main(){
    float n, fatorial =1;

    mensagem();
    cin >> n;

    for ( int i = 1; i <= n; i++)
    {
fatorial *= i;   
 }
    
cout << "O resultado é de: " << fatorial << endl;

    return 0;
}
 