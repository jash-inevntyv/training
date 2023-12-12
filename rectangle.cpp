#include <iostream>
using namespace std;

int main(){
    float l,b,a,p;
    cout << "Enter length and breadth : ";
    cin >> l >> b;
    a = l*b;
    p = 2*(l+b);
    cout << "Area : " << a << " Perimeter : " << p << endl; 
    return 0;
}