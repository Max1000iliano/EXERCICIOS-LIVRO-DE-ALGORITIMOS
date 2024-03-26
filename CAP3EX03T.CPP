//CAP3EX03T.CPP

#include <iostream>
using namespace std;

int main(void) {
  float velocidade, distancia, tempo;

  cout << "Digite o valor da distancia: ";
  cin >> distancia;
  cin.ignore (80, '\n');

  cout << "Digite o valor do tempo: ";
  cin >> tempo;
  cin.ignore (80, '\n');

  velocidade = (distancia * 1000) / (tempo * 60);

  cout << "A velocidade é " << velocidade << " m/s " << endl << endl;

  cout << "Tecle <ENTER> para encerrar o programa...";

  cin.get();
  return 0;
}
