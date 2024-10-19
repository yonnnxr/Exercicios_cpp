#include <iostream>

int main() {
    double consmedio;
    double combustivel;
    double kmper;

    std::cout << "Insira o total de km percorrido: ";
    std::cin >> kmper;
    
    std::cout << "\nInsira ototal de gasolina gasta: ";
    std::cin >> combustivel;

    consmedio = kmper / combustivel;

    std::cout << "O consumo medio e:" << consmedio;
}