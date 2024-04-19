/*A diferença está no uso do namespace. No exemplo inicial, usamos a diretiva using namespace std;, o que nos permite usar cout, endl, e outros componentes da biblioteca padrão sem prefixá-los com std::.

No segundo exemplo, não usamos a diretiva using namespace std;. Em vez disso, prefixamos cout e endl com std:: para especificar que esses componentes pertencem ao namespace std.*/

#include <iostream>
/*A inclusão da biblioteca <string> permite o uso do tipo de dado std::string, que é usado para representar e manipular strings de caracteres em C++.*/
#include <string>

int main() {
    int idade = 25;
    float altura = 1.75f;
    double peso = 68.5;
    char inicial = 'J';
    bool estaChovendo = false;
    std::string nome = "João";

    std::cout << "Idade: " << idade << std::endl;
    std::cout << "Altura: " << altura << " metros" << std::endl;
    std::cout << "Peso: " << peso << " kg" << std::endl;
    std::cout << "Inicial do primeiro nome: " << inicial << std::endl;
    std::cout << "Está chovendo? " << std::boolalpha << estaChovendo << std::endl;
    std::cout << "Nome: " << nome << std::endl;

    return 0;
}
