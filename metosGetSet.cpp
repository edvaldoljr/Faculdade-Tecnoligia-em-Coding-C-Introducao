#include <iostream>
#include <string>

class Pessoa {
    private:
    std::string nome;

    public:
    //Setter
    void setNome(std::string n) {
        nome = n;
    }

    //Getter
    std::string getNome() {
        return nome;
    }
};

int main() {

    using namespace std;

    Pessoa obj;
    obj.setNome("Joao");

    cout << "Nome da pessoa: " << obj.getNome() << endl;

    return 0;

}