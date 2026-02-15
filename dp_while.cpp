 #include<iostream>
 using namespace std;

 int main() {
   
   int n;

   int soma=0;
   int cont=1;

   cout << "digite um numero inteiro";
   cin >> n;


   do
   {
    soma+= cont;
    cont++; 
   } while (cont <= n);

   cout << "soma dos numeros" << n << " = " << soma << endl;
   
   
   
   
   
   
    return 0;
 }