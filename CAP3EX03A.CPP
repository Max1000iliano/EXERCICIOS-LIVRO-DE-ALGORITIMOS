// CAP3EX3A.CPP

#include <iostream>
using namespace std;

int main(void) 
{
  float F, C;
  cout << "Digite a temperatura em Celsius: ";
  cin >> C;
  cin.ignore (80, '\n');

  F = (9 * C + 160) / 5;

  cout << "A temperatura em Fahrenheit é: " << F << endl;

  cout << "Pressione <Enter> para encerrar o programa: ";

  cin.get ();
  return 0;  
}
