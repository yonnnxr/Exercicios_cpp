#include <iostream>

int main() {
    int x;
    int y;
    int soma;

    std::cout << "Insira um numero: ";
    std::cin >> x;
    
    std::cout << "\nInsira outro numero: ";
    std::cin >> y;

    soma = x + y;

    std::cout << "A soma entre " << x << " E " << y << " resulta em: " << soma;
}