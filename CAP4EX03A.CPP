//CAP4EX03A

#include <iostream>
using namespace std;

int main() {
  int a, b, r;

  cout << "Digite o valor de A: ";
  cin >> a;
  cin.ignore (80, '\n');

  cout << "Digite o valor de B: ";
  cin >> b;
  cin.ignore (80,'\n');

  if (a > b) {
    r = a - b;
      } else {
    r = b - a;
  }

  cout << "O resultado da diferença é: " << r << endl;
  cout << "Tecle <ENTER> para encerrar o programa...";

  cin.get();
  return 0;

}
