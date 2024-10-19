#include <iostream>

int main() {
    int c;
    int f;

    std::cout << "Insira os graus(em celsius) para conversao: ";
    std::cin >> c;

    f = (c * 9 + 160) / 5;
    std::cout << f;

}