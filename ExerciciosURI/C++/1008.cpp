#include<iostream>
#include<iomanip>
using namespace std;
main()
{
    int NF,HT;
    float VHT;
    cin>>NF;
    cin>>HT;
    cin>>VHT;
    VHT = (HT * VHT);
    cout<<fixed;
    cout<<" NUMBER = " << NF << endl;
    cout<< setprecision(2) <<" SALARY = U$ " << VHT << endl;
}
