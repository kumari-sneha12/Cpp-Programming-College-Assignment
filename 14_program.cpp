#include <iostream>
using namespace std;
int main()
{
    float r, val, pi = 3.14;
    cout << "enter radius:";
    cin >> r;
    val = (4 * pi * r * r * r) / 3;
    cout << "volume of sphere : " << val << endl;
    return 0;
}