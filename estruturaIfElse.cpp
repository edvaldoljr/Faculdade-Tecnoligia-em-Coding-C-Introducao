#include <iostream>

using namespace std;

int main() {

    int idade;
    float peso;

    cout << "Digite sua idade:";
    cin >> idade;

    if( idade > 18 ) {
        cout << "Maior que 18" << endl; 
    } else {
        cout << "Menor que 18" << endl;
    }

    return 0;
}