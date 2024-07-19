#include <iostream> 

using namespace std; 

int main() 
{
    int r, h; 
    float volcy;
   

    cout << " Input  radius of cylinder : "; 
    cin >> r; 

    cout << " Input height of   cylinder : "; 
    cin >> h; 

  
    volcy = (3.14 * r * r * h);

    cout << " The volume of a cylinder is : "<< volcy << endl; 
    

    return 0; 
} 