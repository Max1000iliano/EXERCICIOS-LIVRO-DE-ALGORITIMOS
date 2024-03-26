//CAP3EX03W.CPP

#include <iostream>
using namespace std;

int main(void) {
  float med_pes, med_metros;

  cout << "Digite a medida em pes: ";
  cin >> med_pes;
  cin.get();
  cin.ignore (80, '\n');

  med_metros = med_pes * 0.3048;

  cout << "A medida em metros é " << med_metros << endl << endl;

  cout << "Tecle <ENTER> para encerrar o programa...";

  cin.get();
  return 0;
  
}
