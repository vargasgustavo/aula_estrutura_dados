#include <iostream>
using namespace std;

void imprime(int n) {
    for (int i = n; i > 0; i--) {
        cout << n << ", ";
    }
}

int main(){
    imprime(5);
    return 0;
}