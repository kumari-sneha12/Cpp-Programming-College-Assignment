//7 wap display mixed data types & arihemtic opertaor

#include <iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
int main()
{
    int m1=5,m2=7;
    double d1=3.7, d2=8.0;
    cout<<fixed<<setprecision(1);
    cout<<m1<<"+"<<d1<<"="<<m1+d1<<endl;
    cout<<m1<<"-"<<d2<<"="<<m1-d2<<endl;
    cout<<m1<<"*"<<d2<<"="<<m1*d2<<endl;
    cout<<m1<<"/"<<d2<<"="<<m1/d2<<endl;
    cout<<m1<<"+"<<d1<<"="<<m1+d1<<endl;
    return 0;
}