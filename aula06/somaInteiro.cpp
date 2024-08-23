#include <iostream>
using namespace std;

int somaInteiro(int n) {
    int soma = 0;
    for (int i = 0; i <= n; i++)
        soma += i;
    return soma;
}

int main() {
    system("cls");
    cout << "Somatoria com 4 numeros: " << somaInteiro(4) << endl;
    return 0;
}