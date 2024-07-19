//  8

#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    cout<<"check overflow/underflow"<<endl;
    int n1=2147483647;
    cout<<"overflow the integer range"<<endl;
    cout<< n1<<"+"<<1<<"="<<n1+1<<endl;
    cout<< n1<<"+"<<2<<"="<<n1+2<<endl;
    cout<<"product is:"<<n1*n1<<endl;

    int n2=-2147483648;
    cout<<"underflow the integer range"<<endl;
    cout<< n2<<"-"<<1<<"="<<n2-1<<endl;
    cout<< n2<<"-"<<2<<"="<< n2-2<<endl;
    cout<<"product is:"<<n2*n2<<endl;

    return 0;


}