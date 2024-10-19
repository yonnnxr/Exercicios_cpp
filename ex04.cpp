#include <iostream>
using namespace std;

int main() {
    string nome;
    double totv;
    double salariofixo;
    double salariofinal;

    std::cout << "Insira o seu nome: ";
    std::cin >> nome;

    std::cout << "Insira o seu salario: ";
    std::cin >> salariofixo;

    std::cout << "Insira o total de vendas(em dinheiro): ";
    std::cin >> totv;

    salariofinal = (totv *0.15) + salariofixo;

    std::cout << "Nome: " << nome << "\n" << "Salario Fixo: " << salariofixo << "\n" << "Salario Final: "
    << salariofinal;
}