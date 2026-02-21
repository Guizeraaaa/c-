#include <iostream>
using namespace std; 



class carro{

private:
int ano; 
float valor, km;



public:


void setano(int a){
//void setano(int ano){
// this indica a varialvel da classe carro por ser o mesmo nome que a de entrada. this->ano = ano;
ano = a;

}


int getano(){





    return ano;
}

float getValor(){
    return valor;
}

float getKM(){
    return km;
}


carro(int a=0, float v=-1, float km=-1){

this-> ano = ano;
valor = v;
 this-> km = km;


}




};










int main(){

carro palio(1935,12800,250);

//palio.setano(1935);

cout << "Palio: \n";
cout << "ANO: " << palio.getano() << endl;
cout << "Valor: " << palio.getValor() << endl;
cout << "KM: " << palio.getKM() << endl;

carro celta;







    return 0;
}