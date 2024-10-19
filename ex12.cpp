#include <iostream>

int main() {
    int c;
    int f;
    double p;

    std::cout << "Insira o valor de custo: ";
    std::cin >> c;

    f = (c * 0.45) + (c*0.28) + c;
    std::cout << f;
}