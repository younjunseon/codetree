#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    
    int a;
    cin>>a;
    int m[a][a];
    
    for(int i =0; i<a;i++){
        for(int j = 0;j<a;j++){
            cin>>m[i][j];
            cout<<m[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}