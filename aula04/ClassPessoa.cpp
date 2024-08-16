#include <iostream>
#include "ClassPessoa.h"
using namespace std;

void Pessoa::setNome(string name){Nome = name;}
string Pessoa::getNome(){return Nome;}

void Pessoa::setRg(string rg){Rg = rg;}
string Pessoa::getRg(){return Rg;}

int main(){
    string name;
    string rg;

    Pessoa p;

    cout << "Digite o seu nome: ";
    cin.ignore();
    getline(cin, name);
    p.setNome(name);

    cout << endl << "Digite o seu RG: ";
    cin >> rg;
    p.setRg(rg);

    cout << endl << "Seu nome: " << p.getNome() << endl;
    cout << "Seu RG: " << p.getRg() << endl;
}