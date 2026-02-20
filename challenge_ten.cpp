#include<iostream>
using namespace std;


void trocarponteiros(){

int varA =1;
int varB=2;
int aux=0;


int* pontA;
int* PontB;
pontA =&varA;
PontB = &varB;

cout << "valor do ponteiro A: " << *pontA << endl; 
cout << "valor do Ponteiro B: " << *PontB << endl; 


//   0  = 1
    aux = varA;
//   1  = 1

varA = 0;
//   0   = 2 
    varA = varB;
//   2   =  2 

// 2    =   1
  varB = aux;



// 1    = 1 
   
cout << "agora valor do Ponteiro  A: " << *pontA << endl; 
cout << "agora valor do Ponteiro  B: " << *PontB << endl; 



}



int main(){

 trocarponteiros();


return 0;
}