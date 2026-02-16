#include<iostream>
using namespace std;

int main(){
    
    // Alocação estática
 int vet[4];
 vet[0]=5;
 vet[1]=10;
 int vetor[4] = {5,10};

cout << vet[2] << endl;

cout << "[";
for (int i=0 ; i<4 ; i++) {
    cout << vet[i] << " ";
}
cout << " ]" << endl;

int x = sizeof(vet); //tamanho do vetor em bytes // int x = sizeof(vet)/sizeof(int) tamanho do vetor
int y = sizeof(int);

cout << "tamanho de inteiro: " << y << endl; // tamanho em bytes de cada elemento do vetor
cout << x << endl; 

//Alocação dinâmica : a reserva de memoria é feita em processamento por ex: entrada de dados do user


int tamanho; 
cout << "Digite o tamanho do vetor" << endl;
   cin >> tamanho;

   int* vetor = new int[tamanho];

 for (int i=0 ; i < tamanho; i++) {
    cout << "Digite o elemten" << i+1 << "do vetor" << endl;
    cin >> vetor[i];
 }

for (int i=0 ; i < tamanho ; i++) {
    cout << vetor[i] << " ";
}
cout << endl;









    return 0;
}