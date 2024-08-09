#include <iostream>
using namespace std;

int somaInt(int v1, int v2){
    int soma;
    soma = v1 + v2;
    return soma;
}

float mediaSoma(float v1, float v2){
    int media;
    media = v1 + v2 / 2;
    return media;
}

int main(){
    cout << "======SOMA DE INTEIROS======" << endl;
    int v1, v2;
    cout << "\nDigite o primeiro valor: ";
    cin >> v1;
    cout << "\nDigite o segundo valor: ";
    cin >> v2;
    int res;
    res = somaInt(v1, v2);
    cout << "\nResultado: " << res << endl;
    cout << "======MÉDIA DE INTEIROS======" << endl;
    int vl1, vl2;
    cout << "\nDigite o primeiro valor: ";
    cin >> vl1;
    cout << "\nDigite o segundo valor: ";
    cin >> vl2;
    float resMed;
    resMed = mediaSoma(vl1, vl2);
    cout << "\nResultado: " << resMed << endl;
    return 0;
}
