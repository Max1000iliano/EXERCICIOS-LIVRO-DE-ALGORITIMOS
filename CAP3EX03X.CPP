//CAP3EX03X.CPP

#include <iostream>
#include <cmath>

using namespace std;

int main(void) {
  float base, indice, raiz;

  cout << "Digite o valor da base: ";
  cin >> base;
  cin.ignore (80, '\n');

  cout << "Digite o valor do indice: ";
  cin >> indice;
  cin.ignore (80, '\n');

  raiz = pow (base, 1/indice);

  cout << "A raiz " << indice << " de " << base << " e: " << raiz << endl << endl;
  cout << "Tecle <ENTER> para encerrar o programa...";
  
  cin.get();
  return 0;
}
