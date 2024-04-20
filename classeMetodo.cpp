//Criando uma classe para fazer nossos metodos
#include <iostream>

class MinhaClasse {
    public:
    //Metodo membro publico
    void meuMetodo() {
        std::cout << "Olá do meuMetodo!" << std::endl;
    }
};

    int main() {
        //Criando um objeto da classe minhaClasse
        MinhaClasse obj;

        //Chamando o método meuMetodo do objeto
        obj.meuMetodo();

        return 0;
    }