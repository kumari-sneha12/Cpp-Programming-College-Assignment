#include <iostream> 

#define PI 3.14159 

using namespace std; 

int main()
{
    float r, a, c;

   

    cout << " Input the radius of a circle : "; 
    cin >> r; 

    c = 2 * PI * r; 
    a= PI * (r * r);

    cout << " The area of the circle is : " << a << endl;
    cout << " The circumference of the circle is : " << c << endl;
  

} 