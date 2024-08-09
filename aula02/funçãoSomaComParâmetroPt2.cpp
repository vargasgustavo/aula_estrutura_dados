#include <iostream>
using namespace std;

int somaInt(int v1, int v2){
    int soma;
    soma = v1 + v2;
    return soma;
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
    return 0;
}
