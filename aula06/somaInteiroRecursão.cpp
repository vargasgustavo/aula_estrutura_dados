#include <iostream>
using namespace std;

int somaInteiro(int n) {
    if (n == 0)
        return 0;
    else
        return n + somaInteiro(n - 1);
}

int main() {
    system("cls");
    cout << "Somatoria com 4 numeros: " << somaInteiro(4) << endl;
    return 0;
}