//CAP3EX03D.CPP

#include <iostream>
using namespace std;

int main(void) 
{
  float tempo, velocidade, distancia, litros_usados;
  cout << "Digite o tempo gasto na viagem: ";
  cin >> tempo;
  cin.ignore (80, '\n');
  cout << "Digite a velocidade média: ";
  cin >> velocidade;
  cin.ignore (80, '\n');

  distancia = tempo * velocidade;
  litros_usados = distancia /12;

  cout << "Velocidade media: " << velocidade << " Km/h" << endl;
  cout << "Tempo gasto na viagem: " << tempo << " h" << endl;
  cout << "Distancia percorrida: " << distancia << " Km" << endl;
  cout << "Quantidade de litros utilizados: " << litros_usados << " L" << endl;
  cout << "Tecle <Enter> para encerrar o programa...";

  cin.get ();
  return 0;
}
