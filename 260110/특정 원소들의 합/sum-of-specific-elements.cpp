#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int a[4][4];
    int sum = 0;

    for(int i = 0; i<4; i++){    
        for(int j = 0; j<4; j++){
            cin>>a[i][j];
        }
    }

    sum = a[0][0] + a[1][0] + a[1][1] + a[2][0] + a[2][1] + a[2][2] + a[3][0] + a[3][1] + a[3][2] + a[3][3];
    cout<<sum;
    
    return 0;
}