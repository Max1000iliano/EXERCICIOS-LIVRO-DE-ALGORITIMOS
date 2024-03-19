//CAP3EX03F.CPP

#include <iostream>
using namespace std;

int main(void) 

{
  int a, b, x;
  
  cout << "Entre o valor de A: ";
  cin >> a;
  cin.ignore (80, '\n');

  cout << "Entre o valor de B: ";
  cin >> b;
  cin.ignore (80, '\n');

  x = a;
  a = b;
  b = x;

  cout << "O valor de A é " << a << endl;
  cout << "O valor de B é " << b << endl;

  cout << "Tecle <Enter> para encerrar o programa...";
  cin.get ();
  return 0;
  
}
