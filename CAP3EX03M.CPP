//CAP3EX03M.CPP

#include <iostream>
#include <cmath>
using namespace std;

int main(void) 
{
  int a, b, c, qa, qb, qc, stotal;

  cout << "Digite o valor de A: ";
  cin >> a;
  cin.ignore (80, '\n');

  cout << "Digite o valor de B: ";
  cin >> b;
  cin.ignore (80, '\n');

  cout << "Digite o valor de C: ";
  cin >> c;
  cin.ignore (80, '\n');

  qa = pow (a, 2);
  qb = pow (b, 2);
  qc = pow (c, 2);

  stotal = qa + qb +qc;

  cout << "A soma dos quadrados dos tres valores e: " << stotal << endl;
  cout << "Tecle <ENTER> para encerrar o programa...";

  cin.get ();
  return 0;
  
}
