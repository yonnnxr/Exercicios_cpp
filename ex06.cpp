#include <iostream>

int main() {
    int a;
    int b;
    int troca;

    std::cout << "Insira o numero a: ";
    std::cin >> a;

    std::cout << "Insira o numero b: ";
    std::cin >> b;

    troca = a;
    a = b;
    b = troca;

    std::cout << "A: " << a << "\n" << "B: " << b;
}