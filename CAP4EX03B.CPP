//CAP4EX03B.CPP

#include <iostream>
using namespace std;

int main(void) {
  int n, r;
  
  cout << "Digite um numero: ";
  cin >> n;
  cin.ignore (80, '\n');

  if (n < 0){
    r = n * (-1);
  } else {
    r = n;
  }

  cout << "O valor do numero e " << r << endl <<endl;

  cout << "Tecle <ENTER> para encerrar o programa...";
  
  cin.get ();
  return 0;
}
