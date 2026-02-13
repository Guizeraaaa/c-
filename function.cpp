 #include <iostream>
using namespace std;

int t; // variavel global
#define pi 3.14;

#define alistar cout << "venha se alistar";


void mensagem(){
    cout << "oi me chamo guilherme" << endl;
}

int somar(int x, int y){
    int soma;
    soma = x+y;
    return soma;
}

int main(){
    
    mensagem();
    int a = 2, b = 4;
    int s;

      s = somar(a,b);
      cout << "Soma: " << s << endl;
      alistar;
    
    
    return 0;

}