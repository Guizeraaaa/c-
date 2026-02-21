 #include <iostream>
 using namespace std;

 class cidadesbrasil{

private:
int fund;
float popu;


public:
cidadesbrasil(int f, float p){
    fund = f;
    popu = p;
}

int getFund(){
    return  fund;
}

float getpopu(){
    return  popu;
}

 };



int main(){
    cidadesbrasil blumenau(1945,361.486);

    cidadesbrasil floripa(1245, 495.214);

    cout << "poupalaçõ de blumenau: " << blumenau.getpopu();


return 0;
};

