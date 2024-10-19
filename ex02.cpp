#include <iostream>

int main() {
    int x;
    int y;
    int soma;
    double subt;
    int mult;
    double divi;

    std::cout << "Insira um numero: ";
    std::cin >> x;
    
    std::cout << "\nInsira outro numero: ";
    std::cin >> y;

    soma = x + y;
    subt = x - y;
    mult = x * y;
    divi = x / y;

    std::cout << "A Soma entre " << x << " E " << y << " resulta em: " << soma << "\n";
    std::cout << "A Subtracao entre " << x << " E " << y << " resulta em: " << subt << "\n";
    std::cout << "A Multiplicacao entre " << x << " E " << y << " resulta em: " << mult << "\n";
    std::cout << "A Divisao entre " << x << " E " << y << " resulta em: " << divi;
}