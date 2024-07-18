// 13

#include<iostream>
using namespace std;

int main()
{
    int a,b,temp;
    cout <<"enter 1st number:";
    cin >> a;
    cout<<"enter 2nd number:";
    cin>>b;
    // swapping 
    temp=a;
    a=b;
    b=temp;
    cout <<"after swapping 1st number:"<<a<<endl;
    cout <<"after swapping 2nd number:"<<b<<endl;
    return 0;

}