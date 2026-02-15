 #include<iostream>
 using namespace std;

 void mensagemturma(){
    cout << "digite a media da turma" << endl;
 }

void msg_nota_um(){
     cout << "digite a nota um: " << endl;
}

void msg_nota_dois(){
     cout << "digite a nota dois: " << endl;
}

void msg_nota_tres(){
     cout << "digite a nota tres: " << endl;
}

float somar(float x, float y, float z){
    float result_soma = x + y + z;
    return result_soma;
}

float calc_media(float x, float y, float z){
     float result_media;
     float result_soma;

     msg_nota_um();
     cin >> x;

     msg_nota_dois();
     cin >> y;

     msg_nota_tres();
     cin >> z;
     
     result_soma = somar(x,y,z);
     result_media = result_soma / 3;
     
     return result_media;
}

void imprimir () {
    float mediaTurma, mediaAluno, x, y, z;
   
     mensagemturma();
     cin >> mediaTurma;

     mediaAluno = calc_media(x,y,z);

     if (mediaAluno > mediaTurma)
     {
        cout << "A sua media e maior que a da turma" << endl;
     } else if (mediaAluno < mediaTurma)
     {
         cout << "A sua media e menor que a da turma" << endl;
    } else {
         cout << "A sua media e igual a da turma" << endl;
    }
     
}

int main(){


    imprimir();
     
    
    
    
    
    return 0;
}