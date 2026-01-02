#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a,b;
    cin>>a>>b;
    int c[10];

    c[0] = a;
    cout<<c[0]<<" ";
    c[1] = b;
    cout<<c[1]<<" ";

    for(int i = 2; i<10;i++){
        if(c[i-1]+c[i-2]<10){
            c[i] = c[i-1]+c[i-2];
            cout<<c[i]<<" ";
        }
        else{
            c[i] = c[i-1]+c[i-2] - 10;
            cout<<c[i]<<" ";
        }
    }
    return 0;
}