#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a,b;
    cin>>a>>b;

    int m[a][b];
    int n[a][b];
    int k[a][b];

    for(int i = 0; i<a; i++){
        for(int j = 0; j<b; j++){
            cin>>m[i][j];
        }
    }
    
    for(int i = 0; i<a; i++){
        for(int j = 0; j<b; j++){
            cin>>n[i][j];
        }
    }

    for(int i = 0; i<a; i++){
        for(int j = 0; j<b; j++){
            if(m[i][j] == n[i][j]){
                k[i][j] = 0;
            }
            else{
                k[i][j] = 1;
            }
            cout<<k[i][j]<<" ";
        }
        cout<<"\n";
    }

    return 0;
}