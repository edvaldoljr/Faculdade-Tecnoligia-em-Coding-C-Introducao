#include <iostream>

using namespace std; // Usa o namespace std para facilitar o uso de cin, cout, etc.

int main() {

    int idade;
    float peso;

    // Solicitar entrada de dados ao usuário
    cout << "Digite sua idade:";
    cin >> idade;
    cout << "Digite seu peso atual:";
    cin >> peso;
    cout << "Sua idade é : " << idade << " Seu peso atual é: " << peso <<endl;

    return 0;
}