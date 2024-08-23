#include <iostream>
using namespace std;

int fat(int n) {
    int f = 1;
    if (n <= 1)
        return f;
    for (int i = 1; i <= n; i++)
        f *= i;
    return f;
}

int main() {
    cout << "Fatoria de 3: " << fat(3) << endl;
    cout << "Fatoria de 1: " << fat(1) << endl;
    cout << "Fatoria de 0: " << fat(0) << endl;
    return 0;
}