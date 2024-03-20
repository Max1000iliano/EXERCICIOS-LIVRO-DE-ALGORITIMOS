//CAP3EX03K.CPP

#include <iostream>

using namespace std;

int main(void) 
{
  float dolares, real, cotacao;
  
  cout << "Digite o valor da cotacao do dolar: ";
  cin >> cotacao;
  cin.ignore (80, '\n');

  cout << "Digite a quantidade disponível de dólares: ";
  cin >> dolares;
  cin.ignore (80, '\n');

  real = dolares * cotacao;

  cout << "A conversão em reais é: " << real << endl;
  cout << "Tecle <ENTER> para encerrar o programa...";

  cin.get ();
  return 0;
  
}
