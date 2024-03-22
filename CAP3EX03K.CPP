//CAP03EX3K.CPP

#include <iostream>
#include <iomanip>

using namespace std;

int main(void) 
{
  float dolares, real, cotacao;

  cout << "Digite o valor da cotacao do dolar: ";
  cin >> cotacao;
  cin.ignore (80, '\n');

  cout << "Digite a quantidade disponivel de dolares: ";
  cin >> dolares;
  cin.ignore (80, '\n');

  real = dolares * cotacao;

  cout << "A conversao em reais e: " << fixed << setprecision (2) <<real << endl;
  cout << "Tecle <ENTER> para encerrar o programa...";

  cin.get ();
  return 0;

}
