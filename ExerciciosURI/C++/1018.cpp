#include <iostream>
using namespace std;
main()
{
   int N,C,CQ,V,D,CC,DO,U;
   cin>>N;
   C = (N / 100);
   CQ = ((N % 100) / 50);
   V = ((N % 50) / 20);
   D = ((N % 20) / 10);
   CC = ((N % 10) / 5);
   DO = ((N % 5) / 2);
   U = ((N % 2) / 1);
    cout<< C << " Nota(s) de 100,00" << endl;
    cout<< CQ << " Nota(s) de 50,00" << endl;
    cout<< V << " Nota(s) de 20,00" << endl;
    cout<< D << " Nota(s) de 10,00" << endl;
    cout<< CC << " Nota(s) de 5,00" << endl;
    cout<< DO << " Nota(s) de 2,00" << endl;
    cout<< U << " Nota(s) de 1,00" << endl;
}
