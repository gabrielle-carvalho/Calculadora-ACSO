#include <iostream>
#include "calculator.hpp"

using namespace std;

double resultado;

double soma(double a, double b){ 
    resultado = a+b;
    cout << "O resultado da sua operação é: " << resultado;
    return resultado;
}

double subtracao(double a, double b){ 
    resultado = a-b;
    cout << "O resultado da sua operação é: " << resultado;
    return resultado;
}

double multiplicacao(double a, double b){ 
    resultado = a*b;
    cout << "O resultado da sua operação é: " << resultado;
    return resultado;
}

double divisao(double a, double b){ 
    resultado = a/b;
    cout << "O resultado da sua operação é: " << resultado;
    return resultado;
}
