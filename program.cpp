//9. wap to display  the operation of pre and post increment and decrement
// #include <iostream>
// #include<conio.h>
// using namespace std;
// int main()
// {
//     int num=57;
    
//     cout <<"the number is :"<<num<<endl;
//     num++;
//     cout <<"after post increment:"<<num<<endl;
//     ++num;
//     cout <<"after pre increment:"<<num<<endl;
//     num--;
//     cout <<"after post decrement:"<<num<<endl;
//     --num;
//     cout <<"after pre decrement:"<<num<<endl;
//     return 0;



// }

//7 wap display mixed data types & arihemtic opertaor

// #include <iostream>
// #include<conio.h>
// #include<iomanip>
// using namespace std;
// int main()
// {
//     int m1=5,m2=7;
//     double d1=3.7, d2=8.0;
//     cout<<fixed<<setprecision(1);
//     cout<<m1<<"+"<<d1<<"="<<m1+d1<<endl;
//     cout<<m1<<"-"<<d2<<"="<<m1-d2<<endl;
//     cout<<m1<<"*"<<d2<<"="<<m1*d2<<endl;
//     cout<<m1<<"/"<<d2<<"="<<m1/d2<<endl;
//     cout<<m1<<"+"<<d1<<"="<<m1+d1<<endl;
//     return 0;
// }


//  8

// #include<iostream>
// #include<conio.h>
// using namespace std;
// int main()
// {
//     cout<<"check overflow/underflow"<<endl;
//     int n1=2147483647;
//     cout<<"overflow the integer range"<<endl;
//     cout<< n1<<"+"<<1<<"="<<n1+1<<endl;
//     cout<< n1<<"+"<<2<<"="<<n1+2<<endl;
//     cout<<"product is:"<<n1*n1<<endl;

//     int n2=-2147483648;
//     cout<<"underflow the integer range"<<endl;
//     cout<< n2<<"-"<<1<<"="<<n2-1<<endl;
//     cout<< n2<<"-"<<2<<"="<< n2-2<<endl;
//     cout<<"product is:"<<n2*n2<<endl;

//     return 0;


// }





// 14

 #include<iostream>
 using namespace std;
 int main()
 {
    float r,val,pi=3.14;
    cout<<"enter radius:"<<endl;
    cin>>r;
    val=(4*pi*r*r*r)/3 ;
    cout<<"volume of sphere:"<<val<<endl;
    return 0;
 }