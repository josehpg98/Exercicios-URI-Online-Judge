#include<iostream>
#include<iomanip>
using namespace std;
main()
{
    int X;
    float Y,KML;
    cin>>X;
    cin>>Y;
    KML = (X / Y);
    cout<<fixed;
    cout<<setprecision(3) << KML << " km/l"<< endl;
}
