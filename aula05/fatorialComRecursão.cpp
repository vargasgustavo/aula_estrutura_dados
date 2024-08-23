#include <iostream>
using namespace std;

int fat(int n) {
    if (n <= 1)
        return 1;
    return n * fat(n - 1);
}


int main() {
    system("cls");
    cout << "Fatoria de 3: " << fat(3) << endl;
    cout << "Fatoria de 1: " << fat(1) << endl;
    cout << "Fatoria de 0: " << fat(0) << endl;
    return 0;
}