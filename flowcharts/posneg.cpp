#include <iostream>

using namespace std;

int main(){
    int n,i=1,x=1;
    cin >> n;
    for(;n>0;n--){
        cout << x*i << " ";
        x++;
        i = -1 * i;
    }
    return 0;
}