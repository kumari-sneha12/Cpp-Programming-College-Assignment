#include <iostream>

using namespace std; 

int main() 
{
    float kel, frh; 

    cout << " Input the temperature in Fahrenheit : "; 
    cin>>frh;

    kel = (5.0 / 9) * (frh - 32) + 273.15; 

   
    cout << " The temperature in Kelvin : " << kel << endl;

    return 0; 
} 