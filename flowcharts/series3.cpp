//   1
// 2 3 2

#include <iostream>

using namespace std;

int main(){
    int n,i=1,j;
    cin >> n;
    for(;i<n+1;i++){
        for(j=i;j<=2*i-1;j++){
            cout << j << " ";
        }
        
        for(j=2*i-2;j>=i;j--){
            cout << j << " ";
        }

        cout << endl;
    }
    return 0;
}