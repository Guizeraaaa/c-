 #include <iostream>
 #include <math.h>
 using namespace std;

 int main(){
    int a=5, b=2;

    int soma=a+b;
    cout << "soma: " << soma << endl;

    int sub=a-b;
    cout << "Subtracao: " << sub << endl;

    int mult=a*b;
    cout << "Multiplicacao: " << mult << endl;

    int quocdiv=a/b;
    cout << "queoeficiente: " << quocdiv << endl;

    int restodiv=a%b;
    cout << "Resto da divisao: " << quocdiv << endl;

    float div = (float)a / (float)b;
    cout << "Divisao: " << div << endl;

    float potencia = pow(a,b);
    cout << "Potencia: " << potencia << endl;

    cout << "a antigo" << a << endl;
    a = a+1;
    a++;

    cout << "a novo" << a << endl;




    
    return 0;
 }