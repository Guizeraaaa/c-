 #include<iostream>
 using namespace std;

 int main(){
    int n;
    cout << "Digite um numero inteiro ";
    cin >> n;

    int soma=0;
    int cont=1;

    while (cont <= n)
    {
        soma+= cont;
        cont++;
    }
    
    cout << "A soma dos numeros de 0 ate " << n << " = " << soma << endl;
    
    
    
    return 0;
 }