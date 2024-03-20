//CAP3EX03J.CPP

#include <iostream>
#include <cmath>

using namespace std;

int main(void) 
{
  int a, b, r;

  cout << "Digite o primeiro numero: ";
  cin >> a;
  cin.ignore (80, '\n');

  cout << "Digite o segundo numero: ";
  cin >> b;
  cin.ignore (80, '\n');

  r = a - b;

  cout << "O resultado do quadrado da diferença é " << pow (r, 2) << endl <<endl;
  cout << "Tecle <ENTER> para encerrar o programa...";

  cin.get ();
  return 0;
}
