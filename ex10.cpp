#include <iostream>

int main() {
    int c;
    int f;

    std::cout << "Insira o valor(em reais) da compra para saber quanto ficara as prestacoes: ";
    std::cin >> c;

    f = c / 5;
    std::cout << f;

}