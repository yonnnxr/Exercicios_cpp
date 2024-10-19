#include <iostream>

int main() {
    int c;
    int f;

    std::cout << "Insira o valor(em reais) depositado para saber quanto rendeu: ";
    std::cin >> c;

    f = c * 0.70;
    std::cout << f;

}