#include <iostream>

int main() {
    int c;
    int f;
    double p;

    std::cout << "Insira o valor de custo: ";
    std::cin >> c;

    std::cout << "Insira o percentual de lucro: ";
    std::cin >> p;

    f = c * (p /100) + c;
    std::cout << f;
}