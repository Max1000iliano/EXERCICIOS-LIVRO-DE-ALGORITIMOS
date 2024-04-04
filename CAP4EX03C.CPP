//CAP4EX03C.CPP

#include <iostream>
using namespace std;

int main(void) {
  float n1, n2, n3, n4, md;

  cout << "Digite o valor de n1: ";
  cin >> n1;
  cin.ignore (80, '\n');

  cout << "Digite o valor de n2: ";
  cin >> n2;
  cin.ignore (80, '\n');

  cout << "Digite o valor de n3: ";
  cin >> n3;
  cin.ignore (80, '\n');

  cout << "Digite o valor de n4: ";
  cin >> n4;
  cin.ignore (80, '\n');

  md = (n1 + n2 + n3 + n4)/4;

  if (md >= 5) {
    cout << "Aluno aprovado. A media obtida foi " << md << endl << endl;
  } else {
    cout << "Aluno reprovado. A media obtida foi " << md << endl << endl;
  }

  cout << "Tecle <ENTER> para encerrar o programa...";
  cin.get ();
  return 0;
  
}
