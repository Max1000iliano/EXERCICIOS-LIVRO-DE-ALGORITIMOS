//CAP3EX03S.CPP

#include <iostream>

using namespace std;

int main(void) 
{
  float a, b, soma, subtracao, multiplicacao, divisao;

  cout << "Digite o valor de A: ";
  cin >> a;
  cin.ignore (80, '\n');

  cout << "Digite o valor de B: ";
  cin >> b;
  cin.ignore (80, '\n');

  soma = a + b;
  subtracao = a - b;
  multiplicacao = a * b;
  divisao = a / b;

  cout << "Soma de " << a << " + " << b << " = " << soma << endl;
  cout << "Subtracao de " << a << " - " << b << " = " << subtracao << endl;
  cout << "Multiplicacao de " << a << " * " << b << " = " << multiplicacao << endl;
  cout << "Divisao de " << a << " / " << b << " = " << divisao << endl << endl; 
  cout << "Tecle <ENTER> para encerrar o programa...";

  cin.get ();
  return 0;
}
