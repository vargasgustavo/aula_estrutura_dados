#include <iostream>
using namespace std;

class Nada {
    private:
        int i;
    public:
        void setI(int i){
            this -> i = i;
        }
        int getI(){
            return i;
        }
};

int main(){
    Nada n;
    n.setI(2);
    cout << "O valor do inteiro na classe nada: " << n.getI() << endl;
    return 0;
}