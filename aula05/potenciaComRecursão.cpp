#include <iostream>
using namespace std;

int pot(int base, int expo) {
    if (expo == 0)
        return 1;
    return base * pot(base, expo - 1);
}

int main() {
    system("cls");
    int x, y;
    cout << "\nx elevado a y: \n\n";
    cout << "Digite x: "; cin >> x;
    cout << "Digite y: "; cin >> y;
    cout << "\n" << x << " elevado " << y << ": " << pot(x, y) << endl;
    return 0;
}