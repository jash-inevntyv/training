#include <iostream>
using namespace std;

int main(){
    int w,x,y,z;
    cout << "Enter four numbers : ";
    cin >> w >> x >> y >> z;
    if(y>x){
        x = y;
    }
    if(w>z){
        z = w; 
    }
    if(z>x){
        x = z; 
    }
    cout << x;
    return 0;
}