#include <iostream>

using namespace std;

int main() {
    int i;
    cout << "Digite um valor 1 ou 2: "; << endl
    cin >> i;

    switch (i) {
    case 1:
        // código
        cout << "O valor digitado foi 1" << endl;
        break;
    case 2:
        // código
        cout << "O valor digitado foi 2" << endl;
        break;
    default:
        // código para o caso padrão
        cout << "O valor errado" << endl;
        break;
}
}