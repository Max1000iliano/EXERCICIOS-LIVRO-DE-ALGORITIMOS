//CAP3EX03U.CPP

#include <iostream>
#include <cmath>

using namespace std;

const float PI = 3.14159;

int main(void) {
  float volume, raio;

  cout << "Digite o raio: ";
  cin >> raio;
  cin.ignore (80, '\n');

  volume = 4 / 3 * PI * pow (raio, 3);

  cout << "O volume da esfera e: " << volume << endl << endl;
  cout << "Pressione <ENTER> para encerrar o programa...";

  cin.get();
  return 0;
  
}
