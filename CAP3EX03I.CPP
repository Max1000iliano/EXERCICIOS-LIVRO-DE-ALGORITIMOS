//CAP3EX03I.CPP

#include <iostream>
#include <cmath>

using namespace std;

int main(void) 
{
  int num;
  cout << "Digite o numero a ser elevado ao quadrado: ";
  cin >> num;
  cin.ignore (80, '\n');

  cout << num << " elevado ao quadrado e " << pow (num,2) << endl << endl;
  cout <<"Tecle <ENTER> para encerrar o programa...";
  
  cin.get ();
  return 0;
}
