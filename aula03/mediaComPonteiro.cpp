#include <iostream>
using namespace std;

void calculos(float n1, float n2, float *media, float *maior){
    *media = (n1 + n2) / 2.0;
    (n1 > n2) ? *maior = n1 : *maior = n2;
}

int main(){
    int nota1 = 9, nota2 = 2;
    float med, maiornota;
    calculos(nota1, nota2, &med, &maiornota);
    cout << "Media: " << med << " Maior nota: " << maiornota << endl;
    return 0;
}