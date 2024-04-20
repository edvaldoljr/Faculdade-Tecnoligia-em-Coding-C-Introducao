#include <iostream>
#include <vector> // Incluindo a biblioteca vector

using namespace std;

int main() {
    //Declaração e inicialização de um vetor de inteiros.
    vector<int> numeros = {1,2,3,4,5};

    //Imprimindo os elementos do vetor
    cout << "Elementos do vetor: " << endl;
    for(int i = 0; i < numeros.size(); i++ ) {
        cout << numeros[i] << " ";
    }
    cout << endl;

    //Adicionanando um novo elemento no vetor
    numeros.push_back(6);

    //Imprimindo os elementos do vetor
    for(int i = 0; i < numeros.size(); i++) {
        cout << numeros[i] << " ";
    }

    cout << endl;

    return 0;
}