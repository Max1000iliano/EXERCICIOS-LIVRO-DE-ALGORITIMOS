//CAP3EX03Z.CPP

#include <iostream>
#include <cmath>

using namespace std;

int main(void) {
  int a, b, resultado;
  cout << "Digite o valor de A: ";
  cin >> a;
  cin.ignore (80, '\n');

  cout << "Digite o valor de B: ";
  cin >> b;
  cin.ignore (80,'\n');

  resultado = pow ((a / b), 2);

  cout << "O resultado e " << resultado << endl;
  cout << "Tecle <ENTER> para encerrar o programa...";

  cin.get();
  return 0;
}
