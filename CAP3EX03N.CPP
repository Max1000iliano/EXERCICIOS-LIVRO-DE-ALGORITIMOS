//CAP3EX03N.CPP

#include <iostream>
#include <cmath>

using namespace std;

int main(void) 
{
  int a, b, c, totalq;
  
  cout << "Digite o valor de A: ";
  cin >> a;
  cin.ignore (80, '\n');

  cout << "Digite o valor de B: ";
  cin >> b;
  cin.ignore (80, '\n');

  cout << "Digite o valor de C: ";
  cin >> c;
  cin.ignore (80, '\n');

  totalq = pow ((a + b + c),2);

  cout << "O valor do quadrado da soma dos tres numeros e " << totalq << endl;
  
  cout << "Tecle <ENTER> para encerrar o programa...";
  
  cin.get();
  return 0;
  
}
