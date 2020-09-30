#include<iostream>
#include<iomanip>
using namespace std;
main()
{
    string NOME;
    double SF,CV;
    cin>>NOME;
    cin>>SF;
    cin>>CV;
    SF = ((CV * 15) / 100) + SF;
    cout<<fixed;
    cout<<setprecision(2) << "TOTAL = R$ "<< SF << endl;
}
