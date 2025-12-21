#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int a, b;
    int n;
    cin>>a>>b;
    if(a>b){
        n = a*b;
        cout<<n;
    }
    else{
        n = b/a;
        cout<<n;
    }
    return 0;
}