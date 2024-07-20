#include <iostream> 

using namespace std;

int main() 
{
    float k, f; 

    cout << " Input the temperature in Kelvin : "; 
    cin>>k;

    f = (9.0 / 5) * (k - 273.15) + 32; 

     
    cout << " The temperature in Fahrenheit : " << f << endl; 

    return 0; 
}