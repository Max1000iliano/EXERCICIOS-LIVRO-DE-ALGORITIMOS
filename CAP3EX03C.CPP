//C3EX03C.CPP

#include <iostream>
#include <cmath>
using namespace std;

const float PI = 3.14159;

int main(void) 
{
  float VOLUME, R, ALTURA;
  
  cout << "Digite o valor do raio: ";
  cin >> R;
  cin.ignore (80, '\n');
  
  cout << "Digite o valor da altura: ";
  cin >> ALTURA;
  cin.ignore (80, '\n');

  VOLUME = PI * pow (R, 2) * ALTURA;

  cout << "O volume do cilindro é: " << VOLUME << endl;
  cout << "Pressione <ENTER> para encerrar o programa...";

  cin.get();
  return 0;
}
