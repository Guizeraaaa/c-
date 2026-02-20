#include<iostream>
using namespace std;

int main(){

int vetor[1];

int soma=0;

int result = 0;
for (int i = 0; i <2 ; i++) {

 cout << "Digite a idade " << i+1 << endl;
 cin >> vetor[i];


}


for (int i=0; i < 2; i++) {
soma += vetor[i]; 
}

result = soma / 2;

cout << "A s medias das idades e: " << result << " anos de idade" << endl;


    return 0;
}