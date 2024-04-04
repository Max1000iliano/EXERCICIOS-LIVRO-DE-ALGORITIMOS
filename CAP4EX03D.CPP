//CAP4EX03D.CPP

#include <iostream>
using namespace std;

int main(void) {
  float n1, n2, n3, n4, md1, ne, md2;

  cout << "Digite o valor da primeira nota: ";
  cin >> n1;
  cin.ignore (80, '\n');

  cout << "Digite o valor da segunda nota: ";
  cin >> n2;
  cin.ignore (80, '\n');

  cout << "Digite o valor da terceira nota: ";
  cin >> n3;
  cin.ignore (80, '\n');

  cout << "Digite o valor da quarta nota: ";
  cin >> n4;
  cin.ignore (80, '\n');

  md1 = (n1 + n2 + n3 + n4)/4;

  cout << '\n';

  if (md1 >= 7) {
    cout << "Aluno aprovado. A media obtida foi " << md1 << endl << endl;
  }
  
  cout << "A media obtida foi " << md1 << " . Digite o valor da quinta nota: ";
  cin >> ne;
  cin.ignore (80, '\n');
  md2 = (md1 + ne)/2;

   if (md2 >= 5) {
     cout << "Aluno aprovado em exame. A media obtida foi " << md2 << endl << endl;
   } else {
       cout << "Aluno reprovado. A media obtida foi " << md2 << endl << endl;
   }
  
   cout << "Pressione <ENTER> para encerrar o programa..." << endl << endl;
   cin.get();
   return 0;

}
