#include <iostream> 

using namespace std;

int main() 
{
    float a1, a2, a3;

    cout << " Input the 1st angle of the triangle : "; 
    cin>>a1;

    cout << " Input the 2nd angle of the triangle : "; 
    cin>>a2;

    a3 = 180 - (a1 + a2);

    cout << " The 3rd of the triangle is : " << a3 << endl; 

    return 0; 
} 