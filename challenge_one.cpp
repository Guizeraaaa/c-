 #include<iostream>
 using namespace std;


 void mensagem() {
    cout << "Digite o valor de X " << endl;
 }

 float calcularfunction() {
  float resultado;
  float x;

            mensagem();
            cin >> x;

    x = (x*x) - (3*x) + 5;
    resultado =  x;



  return resultado;
 }

 void imprimir(){

     float resultado;
    
    resultado = calcularfunction();
    
     cout << "resulta e de: " << resultado << endl;
    
 }

 int main(){



     imprimir();
    
    
    
    return 0;
 }