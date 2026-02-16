#include<iostream>
using namespace std;

void mensagemidade(){
    cout << "Digite a sua idade" << endl;
}

 void mensagemRenda() {
    cout << "Informe a sua renda" << endl;
}

void verificador() {
    int idade;
    float renda;

    mensagemidade();
    cin >> idade;

    mensagemRenda();
    cin >> renda;

    if (idade >= 21 && renda >= 1200 )
    {
        cout << "Aprovado";
    } else if (idade < 21)
    {
        cout << "reprovado por ser menor de 21 anos";
    } else if(renda < 1200)
    {
        cout << " Reprovado por renda menode de R$1200";
    }
}

int main(){
 
    

    verificador();
    
    
     return 0;
}