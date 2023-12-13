#include <iostream>

using namespace std;


int main()
{
    int n, fact = 1, i = 2;
    cout << "Enter n : ";
    cin >> n;
    
    cout << fact << " ";
    for (; n > 1; --n){
        fact = fact * i * (i + 1);
        i = i + 2;
        cout << fact << " ";
    }
    return 0;
}