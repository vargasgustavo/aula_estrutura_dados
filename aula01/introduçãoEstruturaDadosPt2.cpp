#include <iostream>
using namespace std;

int main(){

    int idade;
    cout << "Digite a sua idade: ";
    cin >> idade;

    float salario;
    cout << "\nDigite seu salario: ";
    cin >> salario;

    double altura;
    cout << "\nDigite sua altura: ";
    cin >> altura;

    char tamanho;
    cout << "\nDigite seu tamanho: ";
    cin >> tamanho;

    string nome;
    cout << "\nDigite seu nome: ";
    cin.ignore();
    getline(cin, nome);
    
    cout << "\nNome: " << nome << endl;
    cout << "Idade: " << idade << endl;
    cout << "Pretencao salarial: " << salario << endl;
    cout << "Altura: " << altura << endl;
    cout << "Tamanho: " << tamanho << endl;
}
