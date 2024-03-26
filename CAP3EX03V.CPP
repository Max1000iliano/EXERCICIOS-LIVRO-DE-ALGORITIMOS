//CAP3EX03V.CPP

#include <iostream>
#include <cmath>

using namespace std;

int main() {
  int base, expoente;

  cout << "Digite a base: ";
  cin >> base;
  cin.ignore (80, '\n');

  cout << "Digite o expoente: ";
  cin >> expoente;
  cin.ignore (80, '\n');

  cout << "O resultado é: " << pow(base, expoente) << endl << endl;
  cout << "Tecle <ENTER> para encerrar...";

  cin.get();
  return 0;
}
