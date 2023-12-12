#include <iostream>

using namespace std;

int main(){
    int x,y,z;
    cout << "Enter three numbers : ";
    cin >> x >> y >> z;
    if(x>=y){
        if(x>=z){
            cout << x;
        } else if(y>=z){
            cout << y;
        }
    }else{
        cout << z;
    }
    return 0;
}