//C3EX03E

#include <iostream>
using namespace std;

int main(void) 
{
  float prestacao, valor, taxa, tempo;
  cout << "Digite o valor: ";
  cin >> valor;
  cin.ignore (80, '\n');
  cout << "Digite a taxa: ";
  cin >> taxa;
  cin.ignore (80, '\n');
  cout << "Digite o tempo: ";
  cin >> tempo;
  cin.ignore (80, '\n');
  prestacao = valor + (valor * (taxa / 100) * tempo);
  cout << "O valor da prestacao e: " << prestacao << endl;

  cout << "Pressione <Enter> para encerrar o programa";

  cin.get();
  return 0;  
}
