#include <iostream> 

using namespace std; 

int main() 
{
    int w, l, a, p;


    cout << " Input length of rectangle : "; 
    cin >> l; 

    cout << " Input  width of  rectangle : "; 
    cin >> w;

    a = (l * w);
    p= 2 * (l + w);

    cout << " The area of rectangle is : "<< a << endl; 
    cout << " The perimeter of rectangle is : "<< p << endl; 

    return 0; 
} 