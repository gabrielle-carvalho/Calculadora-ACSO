#include <iostream>
#include "calculator.hpp"

using namespace std;
double a;
double b;
char op;


int main(){
    cout <<"Insira o primeiro valor inteiro: ";
    cin >> a;

    cout << "Insira o segundo valor inteiro: ";
    cin >> b;

    cout << "Insira a operaçao desejada: ";
    cin >> op;


switch (op) {
case '+':
soma(a,b);
    break;
case '-':
subtracao (a, b);
    break;
case '*':
multiplicacao(a, b);
    break;
case '/':
divisao (a, b);
    break;

default:
    cout << "Operação inválida";
    break;
}
    return 0;
}
