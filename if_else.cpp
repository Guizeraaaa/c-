 #include <iostream>

 using namespace std;

 int main(){
    
    
    float nota1, nota2;
    cout << "Informe a nota um\n";
    cin >> nota1;

    cout << "Informe a nota dois\n";
    cin >> nota2;

    float media= (nota1+nota2)/2;
    cout << "Media= " << media << endl;

    //if(media >=5){
   //  cout << "Aluno aprovado\n";
   // }
    
  //  else{
  //      cout << "Aluno Reprovado\n";
  //  }

  if(media < 2.5 ) {
    cout << "Nota final foi D\n";
  } else if (media < 5)
  {
    cout << "Nota final foi C\n";
  } else if (media < 7.5)
  {
    cout << "letra final foi B";
  }
  else{
    cout << "Nota final foi A\n";
  }
  
  


   
   
   
   
   
   
   
    return 0;
 }