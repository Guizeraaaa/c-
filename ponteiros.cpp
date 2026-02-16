#include<iostream>
#include<cstddef>

using namespace std;

int main(){
 int var1;
 int* ponteiro1;

 var1 = 5;
 ponteiro1=&var1;
cout << " valor da variavel através do nome " << var1 << endl;
cout << "Endereco armazenado no ponteiro " << ponteiro1 << endl;
cout  << "valor da variavel, atraves do ponteiro " << *ponteiro1 <<endl;

int var2;
var2 = *ponteiro1; 

//var1 = 30;
//*ponteiro1 = 30;
 // var2 = 50;
 // ponteiro1 = &var2;
 // cout << *ponteiro1;  
 // cout << var1;
 
 
// int* ponteiro2; 
//cout << ponteiro2 << endl;
//ponteiro2 = NULL;
  
//cout << ponteiro2 << endl;

int* pont3 = new int;
*pont3 = 35;
cout << *pont3 << endl;
  

//*pont3 = *ponteiro1;
//delete pont3;
pont3 = ponteiro1;
cout << pont3;

    return 0;
}