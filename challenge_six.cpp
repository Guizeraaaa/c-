 
 #include<iostream>
 using namespace std;

 int main(){
int familia[5];
float resultadomedia;
int resultado=0;
 for (int i=0 ; i < 5; i++) {
   
 cout << "Informe o gasto alimenticio da familia: ";
 cin >> familia[i]; 


resultado += familia[i];
 }

 resultadomedia = resultado /5 ;

 cout << "a média e de: " << resultadomedia << endl;

 for (int i=0 ; i <5; i++) {
    if (familia[i] > resultadomedia)
    {
        cout << "A familia esta acima da media" << endl;
    } else if (familia[i] < resultadomedia) {
        cout << "A familia esta abaixo da media" << endl;
    } else {
        cout << "Esta na media" << endl;
    }
    
 }



 


    return 0;
 }