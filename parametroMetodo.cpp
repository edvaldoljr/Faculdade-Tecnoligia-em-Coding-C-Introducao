#include <iostream>

class Somar {
    public:
    int soma(int a, int b) {
        return a + b;
    }
};

int main() {
    Somar obj;
    
    using namespace std;
    int resultado = obj.soma(5, 3);
    cout << "Resultado da soma 3 + 5 =  " << resultado << endl;
}