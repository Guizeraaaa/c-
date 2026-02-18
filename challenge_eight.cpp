 #include<iostream>
 using namespace std;

  int tamanho;
int* vetor; 
void mensagem(){
    cout << "Digite o tamanho do vetor" << endl;
}
int copularTamanho(){
    
    mensagem();
    cin >> tamanho;

 vetor = new int[tamanho];

  for (int i=0; i < tamanho; i++) {
    
     cout << "digite o valor: " << i+1 << endl;
      cin >> vetor[i];
  }

  return 0;
}

void copularValor(){
  
 copularTamanho();

for (int i=0; i < tamanho; i++) {
    cout << "os valores sao: " << vetor[i] << endl;
}
}

int menu(int x) {
   
   cout << "Menu \n  1 - repetir \n 2 - sair"<< endl;
   cin >> x;
    return x;
}



int main() {
    int repetir;
    
    do {
        copularValor(); // Faz o trabalho
        repetir = menu(0); // Pergunta se quer repetir
        
        if (repetir == 1) {
            delete[] vetor; // Limpa a memória antes de recomeçar
        }
        
    } while (repetir == 1); // Enquanto for 1, ele volta para o "do"
    
    cout << "Obrigado por usar o programa!" << endl;
    delete[] vetor; // Garante a limpeza final ao sair
return 0;
 }