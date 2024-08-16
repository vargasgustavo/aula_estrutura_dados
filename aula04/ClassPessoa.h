#include <iostream>
using namespace std;

class Pessoa {
    private:
        string Nome;
        string Rg;
    public:
        void setNome(string name){
            this -> Nome = name;
        }
        string getNome(){
            return Nome;
        }

        void setRg(string rg){
            this -> Rg = rg;
        }
        string getRg(){
            return Rg;
        }
};