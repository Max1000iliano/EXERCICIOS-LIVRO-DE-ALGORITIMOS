// CAP3EX03B.CPP

#include <iostream>
using namespace std;

int main(void)
{
  float F, C;
  cout << "Digite a temperatura em Fahrenheit: ";
  cin >> F;
  cin.ignore (80, '\n');

  C = ((F-32) * 5) / 9;

  cout << "A temperatura em Celsius é: " << C << endl;
  cout << "Pressione <ENTER> para encerrar o programa...";

  cin.get();
  return 0;
}
