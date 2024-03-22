//CAP3EX030.CPP

#include <iostream>

using namespace std;

int main(void) 
{
  int a, b, c, d, p, s;

  cout << "Digite o valor de A: ";
  cin >> a;
  cin.ignore (80, '\n');

  cout << "Digite o valor de B: ";
  cin >> b;
  cin.ignore (80, '\n');

  cout << "Digite o valor de C: ";
  cin >> c;
  cin.ignore (80, '\n');

  cout << "Digite o valor de D: ";
  cin >> d;
  cin.ignore (80, '\n');

  p = a * c;
  s = b + d;

  cout << "O produto do primeiro com o terceiro valor e " << p << endl << "A soma do segundo com o quarto valor e " << s << endl << endl; 
  
  cout << "Tecle <ENTER> para encerrar o programa...";

  cin.get ();
  return 0;
  
}
