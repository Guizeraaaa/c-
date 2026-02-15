 #include<iostream>
 using namespace std; 

 int main(){

int n;
int soma=0;

cout << "digite um numero inteiro positivo"; 
cin >> n;

for (int j=1 ; j<=n ; j+=1)
{
    soma+=j;
}


cout << "soma dos numeros de 0 ate"  << n << "=" << soma << endl;

    
    return 0;
 }