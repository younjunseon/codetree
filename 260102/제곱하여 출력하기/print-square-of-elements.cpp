#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int a;
    cin>>a;
    int b[a];
    for(int i = 0;i<a;i++){
        cin>>b[i];
    }
    int c[a];
    for(int i = 0;i<a;i++){
        c[i] = b[i]*b[i];
        cout<<c[i]<<" ";
    }
    

    return 0;
}