//CAP3EX03H.CPP

#include <iostream>
using namespace std;

int main(void) 
{
  float comprimento, largura, altura, volume;

  cout << "Digite o comprimento da caixa: ";
  cin >> comprimento;
  cin.ignore (80, '\n');

  cout << "Digite a largura da caixa: ";
  cin >> largura;
  cin.ignore (80, '\n');

  cout << "Digite a altura da caixa: ";
  cin >> altura;
  cin.ignore (80, '\n');

  volume = comprimento * largura * altura;

  cout << "O volume da caixa é " << volume << endl << endl;
  cout << "Pressione <ENTER> para encerrar o programa...";
  
  cin.get ();
  return 0;
}
