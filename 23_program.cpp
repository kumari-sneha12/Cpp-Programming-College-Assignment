#include <iostream>

using namespace std; 

int main() 
{
    float kmph, miph; 

    cout << " Input the distance in kilometer : "; 
    cin>>kmph;

    miph = (kmph * 0.6213712); 

    cout << " The " << kmph << " Km./hr. = " << miph << " Miles/hr." << endl; 

    return 0; 
} 