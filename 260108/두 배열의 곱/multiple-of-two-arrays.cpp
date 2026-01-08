#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int m[3][3];
    int n[3][3];

    for(int i = 0; i<3;i++){
        for(int j = 0; j<3;j++){
            cin>>m[i][j];
        }
    }
    
    for(int i = 0; i<3;i++){
        for(int j = 0; j<3;j++){
            cin>>n[i][j];
        }
    }

    for(int i = 0; i<3;i++){
        for(int j = 0; j<3;j++){
            cout<<m[i][j]*n[i][j]<<" ";
        }
        cout<<"\n";
    }

    return 0;
}