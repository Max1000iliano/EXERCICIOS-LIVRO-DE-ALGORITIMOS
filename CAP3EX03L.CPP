//CAP3EX03L.CPP

#include <iostream>

using namespace std;

int main(void) 
{
  float cot, reais, conv;
  
  cout << "Digite o valor da cotacao do dolar: ";
  cin >> cot;
  cin.ignore (80, '\n');

  cout << "Digite o valor de reais disponíveis: ";
  cin >> reais;
  cin.ignore (80, '\n');

  conv = reais / cot;

  cout << "O valor convertido em dolar é: " << conv << endl;

  cout << "Tecle <ENTER> para encerrar o programa..."

  cin.get ();
  return 0;
  
}
