#include<iostream>//cabeçalho para fluxo de entrada e saida de dados
#include<iomanip>
using namespace std;
main()
{
    setlocale(LC_ALL,"Portuguese");
    int KML = 12,VM,TV;
    double QL;
    cin>>TV;
    cin>>VM;
    QL = (TV * VM);
    QL = (QL / KML);
    cout << fixed;
    //cout.setprecision(3) << QL;
    cout<< setprecision(3) << QL << endl;
}
