#include <iostream>

using namespace std;

int main(){
    int n,i=0,j=1,next;
    cin >> n;
    for(int m=0;m<n;m++){
        cout << i << " ";
        next = i+j;
        i = j;
        j = next;
    }
    return 0;
}