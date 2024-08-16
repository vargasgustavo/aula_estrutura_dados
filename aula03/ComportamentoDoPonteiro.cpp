#include <iostream>
using namespace std;

int main(){
    int idade;
    int *ponteiro;

    idade = 2;
    ponteiro = &idade;
    cout << "Valor da variavel idade: " << idade << endl;
    cout << "Valor da variavel ponteiro: " << ponteiro << endl;
    cout << "Valor da variavel *ponteiro: " << *ponteiro << endl;
    idade++;
    cout << "-----------------------------------------" << endl;
    cout << "idade++" << endl;
    cout << "-----------------------------------------" << endl;
    cout << "Valor da variavel idade: " << idade << endl;
    cout << "Valor da variavel ponteiro: " << ponteiro << endl;
    cout << "Valor da variavel *ponteiro: " << *ponteiro << endl;
    cout << "-----------------------------------------" << endl;
    cout << "*ponteiro = 333" << endl;
    cout << "-----------------------------------------" << endl;
    *ponteiro = 333;
    cout << "Valor da variavel idade: " << idade << endl;
    cout << "Valor da variavel ponteiro: " << ponteiro << endl;
    cout << "Valor da variavel *ponteiro: " << *ponteiro << endl;
    return 0;
}