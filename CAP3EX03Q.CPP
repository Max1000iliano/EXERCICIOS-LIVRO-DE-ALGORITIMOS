//CAP3EX03Q.CPP

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(void) 
{
  float a, r;

  cout << "Digite o valor do raio da circunferencia: ";
  cin >> r;
  cin.ignore (80, '\n');

  a = 3.14159265 * pow (r, 2);


  cout << "A area da circunferencia e " << fixed << setprecision (8) << a << endl << endl;
  cout << "Tecle <ENTER> para encerrar o programa...";

  cin.get ();
  return 0;
}
