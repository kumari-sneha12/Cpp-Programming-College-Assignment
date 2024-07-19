#include <iostream> 

using namespace std; 

int main() 
{
    float f, c; 


    cout << " Input the temperature in Celsius : "; 
    cin >> c;

    f = (c * 9.0) / 5.0 + 32;

    cout << " The temperature in Celsius    : " << c << endl; 
    cout << " The temperature in Fahrenheit : " << f << endl; 

    return 0; 
}