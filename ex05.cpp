#include <iostream>
using namespace std;

int main() {
    string nome;
    double nota1;
    double nota2;
    double nota3;
    double notaf;

    std::cout << "Insira o seu nome: ";
    std::cin >> nome;

    std::cout << "Insira nota 1: ";
    std::cin >> nota1;

    std::cout << "Insira nota 2: ";
    std::cin >> nota2;

    std::cout << "Insira nota 1: ";
    std::cin >> nota3;

    notaf = (nota1 + nota2 + nota3) / 3; 

    std::cout << "Nome: " << nome << "\n" << "Nota 1: " << nota1 << "\n" << "Nota2: "
    << nota2 << "\nNota 3: " << nota3 << "\nNota Final: " << notaf;
}