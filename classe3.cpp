#include <iostream>
using namespace std; 




class carro{
private: 
int ano; 
float valor, km;

public:

//void setano(int a);


carro(int a, float v, float k);



int getano();

float getValor();
float getKM();

};





int main(){


    carro gol(1788,1987,547);

//palio.setano(1935);

cout << "Palio: \n";
cout << "ANO: " << gol.getano() << endl;
cout << "Valor: " << gol.getValor() << endl;
cout << "KM: " << gol.getKM() << endl;
    return 0;
}






//void carro::setano(int a){
//void setano(int ano){
// this indica a varialvel da classe carro por ser o mesmo nome que a de entrada. this->ano = ano;
//ano = a;

//}

carro::carro(int a=0, float v=-1, float k=-1)
{

 ano = a;
valor = v;
 km = k;

}

int carro::getano()
{

    return ano;
}

float carro::getValor(){
    return valor;
}

float carro::getKM(){
    return km;
}



