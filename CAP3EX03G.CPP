//CAP3EX03G.CPP

#include <iostream>
using namespace std;

int main(void) 
{
  int a, b, c, d;
  int a1, a2, a3, a4, a5, a6;
  int m1, m2, m3, m4, m5, m6;

  cout << "Entre com o valor de A: ";
  cin >> a;
  cin.ignore (80, '\n');

  cout << "Entre com o valor de B: ";
  cin >> b;
  cin.ignore (80, '\n');

  cout << "Entre com o valor de C: ";
  cin >> c;
  cin.ignore (80, '\n');

  cout << "Entre com o valor de D: ";
  cin >>d;
  cin.ignore (80, '\n');

  a1 = a + b;
  a2 = a + c;
  a3 = a + d;
  a4 = b + c;
  a5 = b + d;
  a6 = c + d;
  m1 = a * b;
  m2 = a * c;
  m3 = a * d;
  m4 = b * c;
  m5 = b * d;
  m6 = c * d;

  cout << a << " + " << b << " = " << a1 << endl;
  cout << a << " + " << c << " = " << a2 << endl;
  cout << a << " + " << d << " = " << a3 << endl;
  cout << b << " + " << c << " = " << a4 << endl;
  cout << b << " + " << d << " = " << a5 << endl;
  cout << c << " + " << d << " = " << a6 << endl;
  cout << a << " * " << b << " = " << m1 << endl;
  cout << a << " * " << c << " = " << m2 << endl;
  cout << a << " * " << d << " = " << m3 << endl;
  cout << b << " * " << c << " = " << m4 << endl;
  cout << b << " * " << d << " = " << m5 << endl;
  cout << c << " * " << d << " = " << m6 << endl;

  cout << "Pressione <ENTER> para encerrar o programa...";
  cin.get();
  return 0;
}
